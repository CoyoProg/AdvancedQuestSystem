// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/Quest.h"
#include "QuestSystem/QuestComponent.h"
#include "FileManagers.h"

void UQuest::OnNotify_Implementation(const UObject* entity, ENotifyEventType eventTypeP, int UniqueObjectID)
{
	if (isAllObjectivesComplet)
		return;

	for (int i = 0; i < myData->objectives.Num(); i++)
	{
		if (!IsSameObject(i, entity, UniqueObjectID))
			continue;

		if (!IsSameEventType(i, eventTypeP))
			continue;

		/** Update Quest */
		myData->objectives[i].CurrentAmount++;

		/** Check if the objective is completed */
		if (myData->objectives[i].CurrentAmount >= myData->objectives[i].amountNeeded)
		{
			objectivesCompleted++;
		}
	}

	/** Check if all the objectives are completed
		And Remove the Observers if all the objectives are completed*/
	if (objectivesCompleted >= myData->objectives.Num())
	{
		UpdateQuestComponent();
		RemoveMyObservers();
	}

	BookQuest->UpdateQuestBook(this);
}

void UQuest::UpdateQuestComponent()
{
	isAllObjectivesComplet = true;
	UQuestComponent* questComponent = (UQuestComponent*)QuestGiver;

	if (questComponent)
	{
		questComponent->UpdateQuestMarker();
	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Component not found"));
}

bool UQuest::IsSameObject(int objectiveIndexP, const UObject* entityP, int uniqueObjectIdP)
{
	if (myData->objectives[objectiveIndexP].CurrentAmount >= myData->objectives[objectiveIndexP].amountNeeded)
		return false;

	UClass* ObjectiveTargetClass = myData->objectives[objectiveIndexP].objectiveTarget;

	if (entityP->GetClass() != ObjectiveTargetClass)
		return false;

	if (myData->objectives[objectiveIndexP].isUnique && uniqueObjectIdP != myData->objectives[objectiveIndexP].uniqueObjectID)
		return false;

	return true;
}

bool UQuest::IsSameEventType(int objectiveIndexP, ENotifyEventType eventTypeP)
{
	switch (eventTypeP)
	{
	case ENotifyEventType::Interact :
		if (myData->objectives[objectiveIndexP].objectiveType == EObjectivesType::Interact ||
			myData->objectives[objectiveIndexP].objectiveType == EObjectivesType::InteractUnique)
			return true;
		break;

	case ENotifyEventType::Collect	:
		if (myData->objectives[objectiveIndexP].objectiveType == EObjectivesType::Collect ||
			myData->objectives[objectiveIndexP].objectiveType == EObjectivesType::CollectUnique)
			return true;
		break;
	case ENotifyEventType::Kill :
		if (myData->objectives[objectiveIndexP].objectiveType == EObjectivesType::Kill ||
			myData->objectives[objectiveIndexP].objectiveType == EObjectivesType::KillUnique)
			return true;
		break;
	}

	return false;
}

void UQuest::AddMyObservers()
{
	for (auto const&  myObjectives : myData->objectives)
	{
		EObjectivesType eventType = myObjectives.objectiveType;
		playerChannels->AddObserver(this, eventType);
	}
}

void UQuest::RemoveMyObservers()
{
	for (auto const& myObjectives : myData->objectives)
	{
		EObjectivesType eventType = myObjectives.objectiveType;
		playerChannels->RemoveObserver(this, eventType);
	}
}

UQuest::UQuest()
{
	// Create a data Quest
	myData = CreateDefaultSubobject<UQuestData>(TEXT("Quest Data"));
}

void UQuest::EnableQuest(UPlayerChannels* playerChannelsP, UBookQuest* bookQuestP, UObject* questGiverP)
{
	BookQuest = bookQuestP;
	QuestGiver = questGiverP;
	playerChannels = playerChannelsP;

	AddMyObservers();
	bookQuestP->AddQuest(this);
}

void UQuest::DisableQuest()
{
	BookQuest->RemoveQuest(this);
}
