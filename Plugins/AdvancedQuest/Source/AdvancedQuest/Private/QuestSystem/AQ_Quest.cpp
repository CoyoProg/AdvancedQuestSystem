// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/AQ_Quest.h"

#include "QuestSystem/AQ_UniqueIDComponent.h"

#include "External/AQ_FilesManager.h"

UAQ_Quest::UAQ_Quest():
	questData(nullptr),
	QuestGiver(nullptr),
	QuestReceiver(nullptr)
{
	questData = CreateDefaultSubobject<UAQ_QuestData>(TEXT("Quest Data"));
}

UAQ_Quest::~UAQ_Quest()
{
	questData = nullptr;
	QuestGiver = nullptr;
	QuestReceiver = nullptr;
}

void UAQ_Quest::SetQuestData(UAQ_QuestData* questDataP)
{
	questData = DuplicateObject<UAQ_QuestData>(questDataP, this);

	FAQ_RequiermentData requierments = questData->questRequirements;
	if (requierments.playerLevel != 0 || requierments.questID.Num() > 0)
		isRequirementMet = false;
}

void UAQ_Quest::SetQuestReceiver(AActor* questReceiver)
{
	QuestReceiver = questReceiver;
}

void UAQ_Quest::SetQuestGiver(AActor* questGiver)
{
	QuestGiver = questGiver;
}

void UAQ_Quest::EnableQuest()
{
	questState = EAQ_QuestState::Active;
	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, questState);
}

void UAQ_Quest::DisableQuest()
{
	questState = EAQ_QuestState::Archive;

	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, questState);

	/* Reset display properties */
	isDisplayJournal = false;
	isDisplayQuickJournal = false;
}

void UAQ_Quest::ResetQuest()
{
	/* Reset to initial state */
	questState = EAQ_QuestState::Pending;
	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, questState);

	isDisplayJournal = false;
	isDisplayQuickJournal = false;

	/* Reset all the quest properties */
	for (int i = 0; i < questData->objectives.Num(); i++)
	{
		questData->objectives[i].CurrentAmount = 0;
	}

	objectivesCompleted = 0;
	indexQuickDisplay = 0;
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

	if (ObjectivesUpdatedDelegate.IsBound())
		ObjectivesUpdatedDelegate.Broadcast(this);

	/** Check if all the objectives are completed */
	if (objectivesCompleted >= questData->objectives.Num())
	{
		questState = EAQ_QuestState::Valid;
		if (QuestStateChangedDelegate.IsBound())
			QuestStateChangedDelegate.Broadcast(this, questState);
	}
}

void UAQ_Quest::OnQuestRequiermentChange(int questID)
{
	for (auto requirementID : questData->questRequirements.questID)
	{
		if (requirementID == questID)
			questData->requirementsProgression.questID.Add(questID);
	}

	CheckIfRequiermentsMet();
}

void UAQ_Quest::OnLevelRequiermentChange(int playerLevel)
{
	if (questData->questRequirements.playerLevel == playerLevel)
		questData->requirementsProgression.playerLevel = playerLevel;

	CheckIfRequiermentsMet();
}

void UAQ_Quest::CheckIfRequiermentsMet()
{
	FAQ_RequiermentData requierments = questData->questRequirements;
	FAQ_RequiermentData requiermentsProgression = questData->requirementsProgression;

	if (requierments.playerLevel != requiermentsProgression.playerLevel)
		return;

	for(auto requirementID : questData->questRequirements.questID)
	{
		if(!questData->requirementsProgression.questID.Contains(requirementID))
			return;
	}

	isRequirementMet = true;

	if (QuestRequirementMetDelegate.IsBound())
		QuestRequirementMetDelegate.Broadcast(this);
}


bool UAQ_Quest::IsSameObject(int objectiveIndexP, UObject* entityP)
{
	/* Check if there is already the right amount */
	if (questData->objectives[objectiveIndexP].CurrentAmount >= questData->objectives[objectiveIndexP].amountNeeded)
		return false;

	/* Check if the entity Class is the same as the ObjectiveTarget Class */
	UClass* ObjectiveTargetClass = questData->objectives[objectiveIndexP].objectiveTarget;
	if (!entityP->GetClass()->IsChildOf(ObjectiveTargetClass))
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