// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/Quest.h"

void UQuest::OnNotify_Implementation(const UObject* entity, ENotifyEventType eventTypeP, int UniqueObjectID)
{
	if (isAllObjectivesComplet)
		return;

	for (int i = 0; i < objectives.Num(); i++)
	{
		if (!IsSameObject(i, entity, UniqueObjectID))
			continue;

		if (!IsSameEventType(i, eventTypeP))
			continue;

		/** Update Quest */
		objectives[i].CurrentAmount++;

		/** Check if the objective is completed */
		if (objectives[i].CurrentAmount >= objectives[i].amountNeeded)
		{
			objectivesCompleted++;
		}
	}

	/** Check if all the objectives are completed
		And Remove the Observers if all the objectives are completed*/
	if (objectivesCompleted >= objectives.Num())
	{
		isAllObjectivesComplet = true;
		RemoveMyObservers();
	}

	BookQuest->UpdateQuestBook(this);
}

bool UQuest::IsSameObject(int objectiveIndexP, const UObject* entityP, int uniqueObjectIdP)
{
	if (objectives[objectiveIndexP].CurrentAmount >= objectives[objectiveIndexP].amountNeeded)
		return false;

	UClass* ObjectiveTargetClass = objectives[objectiveIndexP].objectiveTarget;

	if (entityP->GetClass() != ObjectiveTargetClass)
		return false;

	if (objectives[objectiveIndexP].isUnique && uniqueObjectIdP != objectives[objectiveIndexP].uniqueObjectID)
		return false;

	return true;
}

bool UQuest::IsSameEventType(int objectiveIndexP, ENotifyEventType eventTypeP)
{
	switch (eventTypeP)
	{
	case ENotifyEventType::Interact :
		if (objectives[objectiveIndexP].objectiveType == EObjectivesType::Interact ||
			objectives[objectiveIndexP].objectiveType == EObjectivesType::InteractUnique)
			return true;
		break;

	case ENotifyEventType::Collect	:
		if (objectives[objectiveIndexP].objectiveType == EObjectivesType::Collect ||
			objectives[objectiveIndexP].objectiveType == EObjectivesType::CollectUnique)
			return true;
		break;
	case ENotifyEventType::Kill :
		if (objectives[objectiveIndexP].objectiveType == EObjectivesType::Kill ||
			objectives[objectiveIndexP].objectiveType == EObjectivesType::KillUnique)
			return true;
		break;
	}

	return false;
}

void UQuest::AddMyObservers()
{
	for (auto const&  myObjectives : objectives)
	{
		EObjectivesType eventType = myObjectives.objectiveType;
		playerChannels->AddObserver(this, eventType);
	}
}

void UQuest::RemoveMyObservers()
{
	for (auto const& myObjectives : objectives)
	{
		EObjectivesType eventType = myObjectives.objectiveType;
		playerChannels->RemoveObserver(this, eventType);
	}
}

void UQuest::EnableQuest(UPlayerChannels* playerChannelsP, UBookQuest* bookQuestP)
{
	BookQuest = bookQuestP;
	playerChannels = playerChannelsP;

	AddMyObservers();
	bookQuestP->AddQuest(this);
}
