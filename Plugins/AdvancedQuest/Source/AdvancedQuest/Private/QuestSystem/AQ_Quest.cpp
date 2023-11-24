// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_Quest.h"

#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_UniqueIDComponent.h"
#include "External/AQ_FilesManager.h"

UAQ_Quest::UAQ_Quest()
{
	// Create a data Quest
	myData = CreateDefaultSubobject<UAQ_QuestData>(TEXT("Quest Data"));
}

UAQ_Quest::~UAQ_Quest()
{
}

void UAQ_Quest::EnableQuest(UAQ_PlayerChannels* playerChannels, UAQ_BookQuest* bookQuest, UObject* questGiver)
{
	BookQuest = bookQuest;
	QuestGiver = questGiver;
	PlayerChannels = playerChannels;

	AddMyObservers();
	bookQuest->AddQuest(this);
}

void UAQ_Quest::DisableQuest()
{
	BookQuest->RemoveQuest(this);
}

void UAQ_Quest::OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP, int UniqueObjectID)
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

void UAQ_Quest::UpdateQuestComponent()
{
	isAllObjectivesComplet = true;
	UAQ_QuestComponent* questComponent = (UAQ_QuestComponent*)QuestGiver;

	if (questComponent)
	{
		questComponent->UpdateQuestMarker();
	}
	else
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Component not found"));

}

void UAQ_Quest::EndPlay()
{
	RemoveMyObservers();
}

bool UAQ_Quest::IsSameObject(int objectiveIndexP, UObject* entityP, int uniqueObjectIdP)
{
	if (myData->objectives[objectiveIndexP].CurrentAmount >= myData->objectives[objectiveIndexP].amountNeeded)
		return false;

	UClass* ObjectiveTargetClass = myData->objectives[objectiveIndexP].objectiveTarget;

	if (entityP->GetClass() != ObjectiveTargetClass)
		return false;

	AActor* MyActor = Cast<AActor>(entityP);
	UAQ_UniqueIDComponent* UniqueIDComponent = MyActor->FindComponentByClass<UAQ_UniqueIDComponent>();

	if (myData->objectives[objectiveIndexP].isUnique)
	{
		int UniqueID = 0;
		if (!UniqueIDComponent)
			return false;
		
		UniqueID = UniqueIDComponent->GetUniqueID();

		if (UniqueID != myData->objectives[objectiveIndexP].uniqueObjectID)
			return false;
	}

	return true;
}

bool UAQ_Quest::IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP)
{
	switch (eventTypeP)
	{
	case EAQ_NotifyEventType::Interact:
		if (myData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Interact ||
			myData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::InteractUnique)
			return true;
		break;

	case EAQ_NotifyEventType::Collect:
		if (myData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Collect ||
			myData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::CollectUnique)
			return true;
		break;
	case EAQ_NotifyEventType::Kill:
		if (myData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Kill ||
			myData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::KillUnique)
			return true;
		break;
	}

	return false;
}

void UAQ_Quest::AddMyObservers()
{
	for (auto const& myObjectives : myData->objectives)
	{
		EAQ_ObjectivesType eventType = myObjectives.objectiveType;
		PlayerChannels->AddObserver(this, eventType);
	}
}

void UAQ_Quest::RemoveMyObservers()
{
	for (auto const& myObjectives : myData->objectives)
	{
		EAQ_ObjectivesType eventType = myObjectives.objectiveType;

		if (PlayerChannels)
		{
			PlayerChannels->RemoveObserver(this, eventType);
		}
	}
}
