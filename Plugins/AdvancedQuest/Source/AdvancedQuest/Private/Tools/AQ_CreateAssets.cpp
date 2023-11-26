// Fill out your copyright notice in the Description page of Project Settings.
#include "Tools/AQ_CreateAssets.h"
#include "External/AQ_FilesManager.h"

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

	Actor->RerunConstructionScripts();

	return Result;
}

UActorComponent* UAQ_CreateAssets::RemoveComponent(TSubclassOf<class UActorComponent> ComponentClass, AActor* Actor, USceneComponent* ParentComponent, FName Name)
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
	Actor->RemoveInstanceComponent(Result);
	Result->OnComponentDestroyed(false);
	Result->DestroyComponent();
	Result->UnregisterComponent();

	Actor->RerunConstructionScripts();

	return nullptr;
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
