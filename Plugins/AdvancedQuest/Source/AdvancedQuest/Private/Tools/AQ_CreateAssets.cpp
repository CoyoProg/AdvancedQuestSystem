// Fill out your copyright notice in the Description page of Project Settings.


#include "Tools/AQ_CreateAssets.h"
#include "External/AQ_FilesManager.h"

int UAQ_CreateAssets::AssignUniqueQuestID()
{
	int LastQuestID = AQ_FilesManager::LoadLastQuestID();
	int NewQuestID = LastQuestID + 1;

	// Save the new LastQuestID
	AQ_FilesManager::SaveLastQuestID(NewQuestID);

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
