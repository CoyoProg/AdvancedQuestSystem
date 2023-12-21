// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_Quest.h"
#include "PlayersChannels/AQ_PlayerChannels.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestData.h"
#include "QuestSystem/AQ_QuestComponent.h"
#include "QuestSystem/AQ_UniqueIDComponent.h"
#include "External/AQ_FilesManager.h"
#include "Enums/AQ_RequiermentEventType.h"

UAQ_Quest::UAQ_Quest():
	questData(nullptr),
	PlayerChannels(nullptr),
	BookQuest(nullptr),
	QuestGiver(nullptr),
	QuestReceiver(nullptr)
{
	questData = CreateDefaultSubobject<UAQ_QuestData>(TEXT("Quest Data"));
}

UAQ_Quest::~UAQ_Quest()
{
	questData = nullptr;
	PlayerChannels = nullptr;
	BookQuest = nullptr;
	QuestGiver = nullptr;
	QuestReceiver = nullptr;
}

void UAQ_Quest::SetQuestData(UAQ_QuestData* questDataP)
{
	questData = DuplicateObject<UAQ_QuestData>(questDataP, this);
}

void UAQ_Quest::SetQuestReceiver(UAQ_QuestComponent* questReceiver)
{
	QuestReceiver = questReceiver;
}

void UAQ_Quest::SetQuestGiver(UAQ_QuestComponent* questGiver)
{
	QuestGiver = questGiver;
}

void UAQ_Quest::EnableQuest(UAQ_PlayerChannels* playerChannels)
{
	questState = EAQ_QuestState::Active;

	/* Keep track of the PlayerChannel component */
	BookQuest = playerChannels->questChannel->GetWidget();
	PlayerChannels = playerChannels;

	/* Add the obervers to the appropriate channel */
	AddMyObservers();

	/* Add the Quest to the UI (if any) */
	if (BookQuest)
		BookQuest->AddQuest(this);
}

void UAQ_Quest::DisableQuest()
{
	/* When a QuestState is Archive, we need to keep track of
	   it in the QuestChannel associated with the PlayerChannel */
	questState = EAQ_QuestState::Archive;

	FAQ_RequiermentData questRequierments;
	questRequierments.questID = questData->questID;

	PlayerChannels->questChannel->NotifyObservers(EAQ_RequiermentEventType::Quest, questRequierments);


	/* Remove the Quest from the UI (if any) */
	if(BookQuest)
		BookQuest->RemoveQuest(this);

	/* Remove the Quest from the Quest Giver when the quest is done */
	if(QuestGiver != QuestReceiver)
		QuestReceiver->RemoveQuestFromArray(this);

	QuestGiver->RemoveQuestFromArray(this);


	/* Reset display properties */
	isDisplayJournal = false;
	isDisplayQuickJournal = false;
}

void UAQ_Quest::ResetQuest()
{
	/* Reset to initial state */
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

	QuestGiver->UpdateQuestMarker();
}

void UAQ_Quest::OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP)
{
	/* If the quest is already valid we dont need to do anything */
	if (questState == EAQ_QuestState::Valid)
		return;

	/* Go through each Objectives and:
	   Check if the Objective Target is the same as the entity notified
	   Check if the Objective Type is the same as the eventType notified */
	for (int i = 0; i < questData->objectives.Num(); i++)
	{
		if (!IsSameObject(i, entity))
			continue;

		if (!IsSameEventType(i, eventTypeP))
			continue;

		/** Update the currentAmount of the Objective if both checks are valid */
		questData->objectives[i].CurrentAmount++;

		/** Check if the Objective is completed */
		if (questData->objectives[i].CurrentAmount >= questData->objectives[i].amountNeeded)
			objectivesCompleted++; // Keep track of all objectives completed
	}

	/** Check if all the objectives are completed */
	if (objectivesCompleted >= questData->objectives.Num())
	{
		questState = EAQ_QuestState::Valid;

		/* Remove the Observers & Update the Quest Receiver */
		UpdateQuestComponent();
		RemoveMyObservers();
	}

	/* Update the UI (if any) */
	if(BookQuest)
		BookQuest->UpdateQuestBook(this);
}

void UAQ_Quest::OnNotifyRequierment_Implementation(EAQ_RequiermentEventType eventType, FAQ_RequiermentData& requiermentData)
{
	if (requiermentData.questID == questData->questRequierments.questID)
	{
		FString DebugMessage = TEXT("Remove observer Requierment");
		float TimeToDisplay = 5.0f;
		FColor TextColor = FColor::Green;
		GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, TextColor, DebugMessage);

		questChannel->RemoveObserverRequierment(this, EAQ_RequiermentEventType::Quest);
	}
}

void UAQ_Quest::UpdateQuestComponent()
{
	/* Set the Quest Marker to the Question Mark Sprite
	   to show that the quest is valid */
	QuestReceiver->SetQuestMarker(true, true);
}

void UAQ_Quest::EndPlay()
{
	/* TEMPORARY, DEBUG ONLY */
	if (questState == EAQ_QuestState::Active && !TriggerEndPlayOnce)
	{
		TriggerEndPlayOnce = true;
		RemoveMyObservers();

		questChannel->RemoveObserverRequierment(this, EAQ_RequiermentEventType::Quest);
		questChannel->RemoveObserverRequierment(this, EAQ_RequiermentEventType::Level);
	}
}

bool UAQ_Quest::IsSameObject(int objectiveIndexP, UObject* entityP)
{
	/* Check if there is already the right amount */
	if (questData->objectives[objectiveIndexP].CurrentAmount >= questData->objectives[objectiveIndexP].amountNeeded)
		return false;

	/* Check if the entity Class is the same as the ObjectiveTarget Class */
	UClass* ObjectiveTargetClass = questData->objectives[objectiveIndexP].objectiveTarget;
	if (entityP->GetClass() != ObjectiveTargetClass)
		return false;

	/* Check if the Objective is a Unique Objective */
	if (questData->objectives[objectiveIndexP].isUnique)
	{
		/* Check if the entity has a Unique ID */
		AActor* MyActor = Cast<AActor>(entityP);
		UAQ_UniqueIDComponent* UniqueIDComponent = MyActor->FindComponentByClass<UAQ_UniqueIDComponent>();

		int UniqueID = 0;
		if (!UniqueIDComponent)
			return false;
		
		/* Get the entity's UniqueID*/
		UniqueID = UniqueIDComponent->GetUniqueID();

		/* And compare it with the Objective UniqueID*/
		if (UniqueID != questData->objectives[objectiveIndexP].uniqueObjectID)
			return false;
	}

	return true;
}

bool UAQ_Quest::IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP)
{
	/* Check if the eventType notified is the same as the ObjectiveType*/
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
