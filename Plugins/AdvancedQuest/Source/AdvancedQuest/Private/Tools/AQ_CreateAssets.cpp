// Fill out your copyright notice in the Description page of Project Settings.
#include "Tools/AQ_CreateAssets.h"
#include "External/AQ_FilesManager.h"
#include <FileHelpers.h>
#include <QuestSystem/AQ_QuestComponent.h>

#define LOCTEXT_NAMESPACE "FAdvancedQuestModule"

int UAQ_CreateAssets::AssignUniqueID(const FString& valueName)
{
	int LastQuestID = AQ_FilesManager::LoadLastQuestID(valueName);
	int NewQuestID = LastQuestID + 1;

	// Save the new LastQuestID
	AQ_FilesManager::SaveLastQuestID(NewQuestID, valueName);

	return NewQuestID;
}

UActorComponent* UAQ_CreateAssets::AddComponent(TSubclassOf<class UActorComponent> ComponentClass, AActor* Actor, USceneComponent* ParentComponent, FName Name)
{
	UActorComponent* Result = nullptr;
	if (!ComponentClass.Get())
	{
		return nullptr;
	}

	Result = NewObject<UActorComponent>(Actor, ComponentClass.Get(), Name);
	USceneComponent* AsSceneComponent = Cast<USceneComponent>(Result);
	if (AsSceneComponent)
	{
		AsSceneComponent->AttachToComponent(ParentComponent ? ParentComponent : Actor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		FTransform T;
		AsSceneComponent->SetComponentToWorld(T);
	}
	Actor->AddInstanceComponent(Result);
	Result->OnComponentCreated();
	Result->RegisterComponent();
	
	UpdateActor(Actor);
	return Result;
}

void UAQ_CreateAssets::RemoveComponent(UActorComponent* ActorComponent, AActor* Actor)
{
	Actor->RemoveInstanceComponent(ActorComponent);
	ActorComponent->DestroyComponent();

	UpdateActor(Actor);
}

void UAQ_CreateAssets::ShowFormattedDialog(const FString& InFileName)
{
	// Very Fancy Dialoge Prompt !
	FText DialogText = FText::Format
	(
		LOCTEXT("PluginButtonDialogText", "{0}"),
		FText::FromString(InFileName)
	);

	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void UAQ_CreateAssets::UpdateActor(AActor* Actor)
{
	Actor->RerunConstructionScripts();
	FEditorFileUtils::SaveCurrentLevel();

	SavePackage(Actor);

	// Save all components' packages
	TArray<UActorComponent*> ActorComponents;
	Actor->GetComponents(ActorComponents);

	SavePackage(ActorComponents[0]); // just to trigger the save
}

void UAQ_CreateAssets::SavePackage(UObject* Object)
{
	if (!Object)
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid object pointer"));
		return;
	}

	// Get the package associated with the object
	UPackage* Package = Object->GetPackage();

	if (!Package)
	{
		Package = Object->GetExternalPackage();
		if(!Package)
			return;
	}

	// Modify the package to mark it as dirty
	Package->Modify();

	// Save the package
	bool bSaved = UPackage::SavePackage(Package, Object, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *Package->GetName(), GError, nullptr, true, true, SAVE_NoError);
}
