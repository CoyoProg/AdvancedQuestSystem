// Copyright 2024, Coyo Prog, All rights reserved.

#include "QuestSystem/AQ_Quest.h"

#include "Enums/AQ_NotifyEventType.h"
#include <DataAssets/AQ_ItemData.h>
#include "Interactables/AQ_Collectable.h"
#include "External/AQ_FilesManager.h"
#include "QuestSystem/AQ_UniqueIDComponent.h"

UAQ_Quest::UAQ_Quest()
{
	QuestData = CreateDefaultSubobject<UAQ_QuestData>(TEXT("Quest Data"));
}

UAQ_Quest::~UAQ_Quest()
{
}

void UAQ_Quest::SetQuestData(UAQ_QuestData* questDataP)
{
	QuestData = DuplicateObject<UAQ_QuestData>(questDataP, this);

	/* Check if there is any requirements*/
	FAQ_RequiermentData& requirements = QuestData->questRequirements;
	
	if (requirements.PlayerLevel != 0)
		requirements.LevelMet = false;

	if (requirements.SpecialEvents.Num() > 0)
		requirements.AllEventsMet = false;

	if(!requirements.LevelMet
		|| !requirements.AllEventsMet
		|| requirements.QuestID.Num() > 0)
		bIsRequirementMet = false;
}

void UAQ_Quest::UpdateQuestState()
{
	if (PositiveObjectiveUpdateDelegate.IsBound())
		PositiveObjectiveUpdateDelegate.Broadcast(this);

	AllObjectivesCompleted = true;
	int objectivesCount = QuestData->objectives.Num();
	for (int i = 0; i < objectivesCount; i++)
	{
		if (!QuestData->objectives[i].isObjectiveComplete)
			AllObjectivesCompleted = false;
	}

	/** Check if all the objectives are completed */
	if (AllObjectivesCompleted)
	{
		QuestState = EAQ_QuestState::Valid;
		if (QuestStateChangedDelegate.IsBound())
			QuestStateChangedDelegate.Broadcast(this, QuestState);
	}
}

void UAQ_Quest::EnableQuest()
{
	QuestState = EAQ_QuestState::Active;
	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, QuestState);
}

void UAQ_Quest::DisableQuest()
{
	QuestState = EAQ_QuestState::Archive;

	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, QuestState);

	/* Reset display properties */
	bIsDisplayQuestLog = false;
	bIsDisplayQuestTracker = false;
}

void UAQ_Quest::ResetQuest()
{
	/* Reset to initial state */
	QuestState = EAQ_QuestState::Pending;
	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, QuestState);

	bIsDisplayQuestLog = false;
	bIsDisplayQuestTracker = false;

	/* Reset all the objectives */
	for (int i = 0; i < QuestData->objectives.Num(); i++)
	{
		QuestData->objectives[i].CurrentAmount = 0;
		QuestData->objectives[i].isObjectiveComplete = false;
	}

	IndexQuestTracker = 0;
}

void UAQ_Quest::ResetObjectives()
{
	/* Reset all objectives to zero */
	for (auto& Objectives : QuestData->objectives)
	{
		Objectives.CurrentAmount = 0;
		Objectives.isObjectiveComplete = false;
	}

	if (NegativeObjectiveUpdateDelegate.IsBound())
		NegativeObjectiveUpdateDelegate.Broadcast(this);
}

void UAQ_Quest::QuestFailed()
{
	QuestState = EAQ_QuestState::Failed;

	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, QuestState);
}

void UAQ_Quest::OnNotify(UObject* entity, EAQ_NotifyEventType eventTypeP, float amount)
{
	bool bIsEventRemovedFromInventory = false;
	int objectivesCount = QuestData->objectives.Num();

	if (eventTypeP == EAQ_NotifyEventType::RemovedFromInventory)
		bIsEventRemovedFromInventory = true;
	
	/* Check all condition if the event Type is Collect or RemovedFromInventory*/
	if (eventTypeP == EAQ_NotifyEventType::Collect || bIsEventRemovedFromInventory)
	{
		for (int i = 0; i < objectivesCount; i++)
		{
			if (!IsSameItem(i, entity))
				continue;

			if (!IsSameEventType(i, eventTypeP))
				continue;

			UpdateCurrentObjective(i, amount);
			break; /* We don't need to check the others objectives, two objectives
			wont have the same Target in a same quest */
		}
	}
	else
	{
		if (QuestState == EAQ_QuestState::Valid)
			return;

		/* Check all conditions for all the others types */
		
		/* Go through each Objectives and:
		Check if the Objective Target is the same as the entity notified
		Check if the Objective Type is the same as the eventType notified */
		for (int i = 0; i < objectivesCount; i++)
		{
			/* Check if there is already the right amount */
			if (QuestData->objectives[i].CurrentAmount >= QuestData->objectives[i].amountNeeded)
				continue;

			if (!IsSameObject(i, entity))
				continue;

			if (!IsSameEventType(i, eventTypeP))
				continue;

			UpdateCurrentObjective(i, amount);
			break; /* We don't need to check the others objectives, two objectives
			wont have the same Target in a same quest */
		}
	}

	AllObjectivesCompleted = true;
	for (int i = 0; i < objectivesCount; i++)
	{
		if (!QuestData->objectives[i].isObjectiveComplete)
			AllObjectivesCompleted = false;
	}

	/** Check if all the objectives are completed */
	if (AllObjectivesCompleted && QuestState != EAQ_QuestState::Valid)
	{
		QuestState = EAQ_QuestState::Valid;
		if (QuestStateChangedDelegate.IsBound())
			QuestStateChangedDelegate.Broadcast(this, QuestState);

		return;
	}

	/* Update the state if the objective was valid but isn't anymore */
	if (!AllObjectivesCompleted && QuestState == EAQ_QuestState::Valid)
	{
		QuestState = EAQ_QuestState::Active;
		if (QuestStateChangedDelegate.IsBound())
			QuestStateChangedDelegate.Broadcast(this, QuestState);
	}
}

void UAQ_Quest::UpdateCurrentObjective(int CurrentIndex, float amount)
{
	int& currentAmount = QuestData->objectives[CurrentIndex].CurrentAmount;
	int amountNeeded = QuestData->objectives[CurrentIndex].amountNeeded;

	currentAmount += amount;

	if (currentAmount < 0)
		currentAmount = 0;

	/** Check if the Objective is completed */
	if (currentAmount >= amountNeeded && !QuestData->objectives[CurrentIndex].isObjectiveComplete)
	{
		QuestData->objectives[CurrentIndex].isObjectiveComplete = true;
	}
	else if (currentAmount < amountNeeded && QuestData->objectives[CurrentIndex].isObjectiveComplete)
	{
		QuestData->objectives[CurrentIndex].isObjectiveComplete = false;
	}
	
	/* Update the objective only if currentAmount is less than the amount needed 
	   We don't want to have a bigger number showing in the quest Log */
	if (currentAmount <= amountNeeded)
	{
		if (amount < 0 && NegativeObjectiveUpdateDelegate.IsBound())
		{
			NegativeObjectiveUpdateDelegate.Broadcast(this);
			return;
		}

		if (PositiveObjectiveUpdateDelegate.IsBound())
			PositiveObjectiveUpdateDelegate.Broadcast(this);
	}
}

void UAQ_Quest::OnQuestRequirementChange(UAQ_Quest* questUpdateP, EAQ_QuestState questStateP)
{
	if (questStateP != EAQ_QuestState::Archive)
		return;

	int targetID = questUpdateP->QuestData->QuestID;

	if (!QuestData->questRequirements.QuestID.Contains(targetID))
		return;

	QuestData->questRequirements.QuestID[targetID] = true;
	questUpdateP->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_Quest::OnQuestRequirementChange);
	CheckIfRequirementsMet();
}

void UAQ_Quest::OnEventRequirementChange(UAQ_SpecialEventData* specialEvent)
{
	if (!QuestData->questRequirements.SpecialEvents.Contains(specialEvent))
		return;

	QuestData->questRequirements.SpecialEvents[specialEvent] = true;
	CheckIfRequirementsMet();
}

void UAQ_Quest::OnLevelRequirementChange(int PlayerLevel)
{
	FString DebugMessage = TEXT("OnLevelR Trigger");
	float TimeToDisplay = 5.0f; // Display time in seconds
	FColor TextColor = FColor::Green; // Message text color

	// Create the debug message
	GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, TextColor, DebugMessage);

	if (QuestData->questRequirements.PlayerLevel > PlayerLevel)
		return;

	QuestData->questRequirements.LevelMet = true;
	CheckIfRequirementsMet();
}

void UAQ_Quest::OnNewDay()
{
	/* Reset the Quest only if it's Archived.
	If the quest is still under progress, or valid, it will not be reset */
	if (QuestState == EAQ_QuestState::Archive)
		ResetQuest();
}

void UAQ_Quest::CheckIfRequirementsMet()
{
	/* Check if all the requirements are met */
	FAQ_RequiermentData& requirements = QuestData->questRequirements;

	/* Check Level Requirement */
	if (!requirements.LevelMet)
		return;

	/* Chech Events Requirements */
	if (!requirements.AllEventsMet)
	{
		for (auto eventID = requirements.SpecialEvents.CreateConstIterator(); eventID; ++eventID)
		{
			if (!eventID.Value())
				return;
		}

		requirements.AllEventsMet = true;
	}

	/* Chech Quest Requirements */
	for(auto questID = requirements.QuestID.CreateConstIterator(); questID; ++questID)
	{
		if (!questID.Value())
			return;
	}

	bIsRequirementMet = true;

	if (QuestRequirementMetDelegate.IsBound())
		QuestRequirementMetDelegate.Broadcast(this);
}


bool UAQ_Quest::IsSameObject(int objectiveIndexP, UObject* entityP)
{
	/* Check if the entity Class is the same as the ObjectiveTarget Class */
	UClass* ObjectiveTargetClass = QuestData->objectives[objectiveIndexP].objectTarget;
	if (!entityP->GetClass()->IsChildOf(ObjectiveTargetClass))
		return false;

	/* Check if the Objective is a Unique Objective */
	if (QuestData->objectives[objectiveIndexP].isUnique)
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
		if (UniqueID != QuestData->objectives[objectiveIndexP].uniqueObjectID)
			return false;
	}

	return true;
}

bool UAQ_Quest::IsSameItem(int objectiveIndexP, UObject* entityP)
{
	UAQ_ItemData* itemData = Cast<UAQ_ItemData>(entityP);
	if (!itemData)
		return false;

	if (itemData != QuestData->objectives[objectiveIndexP].itemTarget)
		return false;

	return true;
}

bool UAQ_Quest::IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP)
{
	/* Check if the eventType notified is the same as the ObjectiveType*/
	switch (eventTypeP)
	{
		// ENVIRONMENT
	case EAQ_NotifyEventType::Interact:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Interact)
			return true;
		break;

	case EAQ_NotifyEventType::MiniGame:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::MiniGame)
			return true;
		break;

	case EAQ_NotifyEventType::Travel:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Location)
			return true;
		break;

		// INVENTORY
	case EAQ_NotifyEventType::Collect:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Collect)
			return true;
		break;

	case EAQ_NotifyEventType::RemovedFromInventory:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Collect)
			return true;
		break;

		// COMBAT
	case EAQ_NotifyEventType::Heal:
		break;

	case EAQ_NotifyEventType::Damage:
		break;

	case EAQ_NotifyEventType::Kill:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Kill)
			return true;
		break;

	case EAQ_NotifyEventType::Protect:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Protect)
			return true;
		break;


		// PLAYER STATS
	case EAQ_NotifyEventType::PlayerLevelUp:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::PlayerLevelUp)
			return true;
		break;
	}

	return false;
}
