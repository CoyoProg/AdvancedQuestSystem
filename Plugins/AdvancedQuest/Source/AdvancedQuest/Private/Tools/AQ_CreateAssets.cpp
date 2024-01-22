// Copyright 2024, Coyo Prog, All rights reserved.

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
	if (!Actor)
		return nullptr;

	Actor->RerunConstructionScripts();

	UActorComponent* Result = nullptr;
	if (!ComponentClass.Get())
		return nullptr;

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

#if WITH_EDITOR
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
#endif
}

void UAQ_CreateAssets::UpdateActor(AActor* Actor)
{
	Actor->RerunConstructionScripts();

#if WITH_EDITOR
	FEditorFileUtils::SaveCurrentLevel();
#endif

	SavePackage(Actor);
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
	Package->MarkPackageDirty();
}
