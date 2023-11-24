// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_UniqueIDComponent.h"
#include "External/AQ_FilesManager.h"

// Sets default values for this component's properties
UAQ_UniqueIDComponent::UAQ_UniqueIDComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

int UAQ_UniqueIDComponent::AssignUniqueID()
{
	int LastUniqueID = AQ_FilesManager::LoadLastQuestID("LastUniqueActorID");
	int NewUniqueID = LastUniqueID + 1;

	// Save the new LastQuestID
	AQ_FilesManager::SaveLastQuestID(NewUniqueID, "LastUniqueActorID");

	return NewUniqueID;
}
