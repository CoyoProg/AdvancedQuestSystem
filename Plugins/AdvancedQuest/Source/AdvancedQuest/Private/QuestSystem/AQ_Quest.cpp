// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_Quest.h"
#include "PlayersChannels/AQ_PlayerChannels.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestData.h"
#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_UniqueIDComponent.h"
#include "External/AQ_FilesManager.h"

UAQ_Quest::UAQ_Quest():
	questData(nullptr),
	PlayerChannels(nullptr),
	BookQuest(nullptr),
	QuestGiverComponent(nullptr)
{
	questData = CreateDefaultSubobject<UAQ_QuestData>(TEXT("Quest Data"));
}

UAQ_Quest::~UAQ_Quest()
{
	questData = nullptr;
	PlayerChannels = nullptr;
	BookQuest = nullptr;
	QuestGiverComponent = nullptr;
}

void UAQ_Quest::SetQuestData(UAQ_QuestData* questDataP)
{
	questData = DuplicateObject<UAQ_QuestData>(questDataP, this);
}

void UAQ_Quest::EnableQuest(UAQ_PlayerChannels* playerChannels, UAQ_QuestComponent* questGiver)
{
	questState = EAQ_QuestState::Active;

	if (playerChannels)
	{
		BookQuest = playerChannels->questChannel->GetWidget();
		PlayerChannels = playerChannels;
		AddMyObservers();
	}

	if (BookQuest)
		BookQuest->AddQuest(this);

	QuestGiverComponent = questGiver;
}

void UAQ_Quest::DisableQuest()
{
	questState = EAQ_QuestState::Archive;

	if(BookQuest)
		BookQuest->RemoveQuest(this);

	if (QuestGiverComponent)
		QuestGiverComponent->RemoveQuestFromArray(this);

	isDisplayJournal = false;
	isDisplayQuickJournal = false;
}

void UAQ_Quest::ResetQuest()
{
	questState = EAQ_QuestState::Pending;

	/* Remove the quest from the journal */
	if (BookQuest)
		BookQuest->RemoveQuest(this);

	isDisplayJournal = false;
	isDisplayQuickJournal = false;

	/* Remove the Observers*/
	RemoveMyObservers();

	/* Reset all the quest properties */
	for (int i = 0; i < questData->objectives.Num(); i++)
	{
		questData->objectives[i].CurrentAmount = 0;
	}

	objectivesCompleted = 0;
	indexQuickDisplay = 0;

	/* Reset all references */
	PlayerChannels = nullptr;
	BookQuest = nullptr;

	if (QuestGiverComponent)
		QuestGiverComponent->UpdateQuestMarker();
}

void UAQ_Quest::OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP)
{
	if (questState == EAQ_QuestState::Valid)
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
		questState = EAQ_QuestState::Valid;

		UpdateQuestComponent();
		RemoveMyObservers();
	}

	if(BookQuest)
		BookQuest->UpdateQuestBook(this);
}

void UAQ_Quest::UpdateQuestComponent()
{
	if (QuestGiverComponent)
		QuestGiverComponent->SetQuestMarker(true, true);
}

void UAQ_Quest::EndPlay()
{
	/* TEMPORARY */
	if (questState == EAQ_QuestState::Active)
	{
		questState = EAQ_QuestState::Pending;
		RemoveMyObservers();
	}
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
		if (PlayerChannels)
			PlayerChannels->AddObserver(this, eventType);
	}
}

void UAQ_Quest::RemoveMyObservers()
{
	for (auto const& myObjectives : questData->objectives)
	{
		EAQ_ObjectivesType eventType = myObjectives.objectiveType;
		if (PlayerChannels)
			PlayerChannels->RemoveObserver(this, eventType);
	}
}
