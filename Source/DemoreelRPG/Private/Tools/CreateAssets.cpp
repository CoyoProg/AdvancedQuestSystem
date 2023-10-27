// Fill out your copyright notice in the Description page of Project Settings.

#include "Tools/CreateAssets.h"				

#include "QuestSystem/Quest.h"
#include "FileManagers.h"

int UCreateAssets::AssignUniqueQuestID()
{
	int LastQuestID = FileManagers::LoadLastQuestID();
	int NewQuestID = LastQuestID + 1;

	// Save the new LastQuestID
	FileManagers::SaveLastQuestID(NewQuestID);

	return NewQuestID;
}

UActorComponent* UCreateAssets::AddComponent(TSubclassOf<class UActorComponent> ComponentClass, AActor* Actor, USceneComponent* ParentComponent, FName Name)
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
