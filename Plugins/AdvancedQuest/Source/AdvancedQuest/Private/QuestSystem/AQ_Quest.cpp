// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_Quest.h"
#include "PlayersChannels/AQ_PlayerChannels.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestData.h"
#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_UniqueIDComponent.h"
#include "External/AQ_FilesManager.h"

UAQ_Quest::UAQ_Quest()
{
	questData = CreateDefaultSubobject<UAQ_QuestData>(TEXT("Quest Data"));
}

UAQ_Quest::~UAQ_Quest()
{
}

void UAQ_Quest::EnableQuest(UAQ_PlayerChannels* playerChannels, UObject* questGiver)
{
	IsEnable = true;

	BookQuest = playerChannels->questChannel->GetWidget();
	QuestGiver = questGiver;
	PlayerChannels = playerChannels;

	if (BookQuest)
		BookQuest->AddQuest(this);

	AddMyObservers();
}

void UAQ_Quest::DisableQuest()
{
	IsEnable = false;

	if(BookQuest)
		BookQuest->RemoveQuest(this);

	isDisplayJournal = false;
	isDisplayQuickJournal = false;
}

void UAQ_Quest::OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP)
{
	if (isAllObjectivesComplet)
		return;

	for (int i = 0; i < questData->objectives.Num(); i++)
	{
		if (!IsSameObject(i, entity))
			continue;

		if (!IsSameEventType(i, eventTypeP))
			continue;

		/** Update Quest */
		questData->objectives[i].CurrentAmount++;

		/** Check if the objective is completed */
		if (questData->objectives[i].CurrentAmount >= questData->objectives[i].amountNeeded)
		{
			objectivesCompleted++;
		}
	}

	/** Check if all the objectives are completed
		And Remove the Observers if all the objectives are completed*/
	if (objectivesCompleted >= questData->objectives.Num())
	{
		UpdateQuestComponent();
		RemoveMyObservers();
	}

	if(BookQuest)
		BookQuest->UpdateQuestBook(this);
}

void UAQ_Quest::UpdateQuestComponent()
{
	isAllObjectivesComplet = true;
	UAQ_QuestComponent* questComponent = (UAQ_QuestComponent*)QuestGiver;

	if (questComponent)
		questComponent->UpdateQuestMarker();
}

void UAQ_Quest::EndPlay()
{
	if(IsEnable)
		RemoveMyObservers();
}

bool UAQ_Quest::IsSameObject(int objectiveIndexP, UObject* entityP)
{
	if (questData->objectives[objectiveIndexP].CurrentAmount >= questData->objectives[objectiveIndexP].amountNeeded)
		return false;

	UClass* ObjectiveTargetClass = questData->objectives[objectiveIndexP].objectiveTarget;

	if (entityP->GetClass() != ObjectiveTargetClass)
		return false;

	AActor* MyActor = Cast<AActor>(entityP);
	UAQ_UniqueIDComponent* UniqueIDComponent = MyActor->FindComponentByClass<UAQ_UniqueIDComponent>();

	if (questData->objectives[objectiveIndexP].isUnique)
	{
		int UniqueID = 0;
		if (!UniqueIDComponent)
			return false;
		
		UniqueID = UniqueIDComponent->GetUniqueID();

		if (UniqueID != questData->objectives[objectiveIndexP].uniqueObjectID)
			return false;
	}

	return true;
}

bool UAQ_Quest::IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP)
{
	switch (eventTypeP)
	{
	case EAQ_NotifyEventType::Interact:
		if (questData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Interact)
			return true;
		break;

	case EAQ_NotifyEventType::Collect:
		if (questData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Collect)
			return true;
		break;
	case EAQ_NotifyEventType::Kill:
		if (questData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Kill)
			return true;
		break;
	}

	return false;
}

void UAQ_Quest::AddMyObservers()
{
	for (auto const& myObjectives : questData->objectives)
	{
		EAQ_ObjectivesType eventType = myObjectives.objectiveType;
		PlayerChannels->AddObserver(this, eventType);
	}
}

void UAQ_Quest::RemoveMyObservers()
{
	for (auto const& myObjectives : questData->objectives)
	{
		EAQ_ObjectivesType eventType = myObjectives.objectiveType;

		if (PlayerChannels)
		{
			PlayerChannels->RemoveObserver(this, eventType);
		}
	}
}
