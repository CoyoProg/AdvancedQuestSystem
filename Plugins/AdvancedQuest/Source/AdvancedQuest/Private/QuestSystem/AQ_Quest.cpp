#include "QuestSystem/AQ_Quest.h"

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
	FAQ_RequiermentData requirements = QuestData->questRequirements;
	if (requirements.PlayerLevel != 0 || requirements.QuestID.Num() > 0)
		bIsRequirementMet = false;
}

void UAQ_Quest::UpdateQuestState()
{
	if (ObjectivesUpdatedDelegate.IsBound())
		ObjectivesUpdatedDelegate.Broadcast(this);

	/** Check if all the objectives are completed */
	if (ObjectivesCompleted >= QuestData->objectives.Num())
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
	bIsDisplayJournal = false;
	bIsDisplayQuickJournal = false;
}

void UAQ_Quest::ResetQuest()
{
	/* Reset to initial state */
	QuestState = EAQ_QuestState::Pending;
	if (QuestStateChangedDelegate.IsBound())
		QuestStateChangedDelegate.Broadcast(this, QuestState);

	bIsDisplayJournal = false;
	bIsDisplayQuickJournal = false;

	/* Reset all the objectives */
	for (int i = 0; i < QuestData->objectives.Num(); i++)
	{
		QuestData->objectives[i].CurrentAmount = 0;
	}

	ObjectivesCompleted = 0;
	IndexQuickDisplay = 0;
}

void UAQ_Quest::OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP, float amount)
{
	bool bIsEventRemovedFromInventory = false;

	if (eventTypeP == EAQ_NotifyEventType::RemovedFromInventory)
		bIsEventRemovedFromInventory = true;
	
	/* Check all condition if the event Type is Collect or RemovedFromInventory*/
	if (eventTypeP == EAQ_NotifyEventType::Collect || bIsEventRemovedFromInventory)
	{
		for (int i = 0; i < QuestData->objectives.Num(); i++)
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
		/* Check all conditions for all the others types */
		
		/* Go through each Objectives and:
		Check if the Objective Target is the same as the entity notified
		Check if the Objective Type is the same as the eventType notified */
		for (int i = 0; i < QuestData->objectives.Num(); i++)
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

	/** Check if all the objectives are completed */
	int objectivesCount = QuestData->objectives.Num();
	if (ObjectivesCompleted >= objectivesCount && QuestState != EAQ_QuestState::Valid)
	{
		QuestState = EAQ_QuestState::Valid;
		if (QuestStateChangedDelegate.IsBound())
			QuestStateChangedDelegate.Broadcast(this, QuestState);

		return;
	}

	if (ObjectivesCompleted < objectivesCount && QuestState == EAQ_QuestState::Valid)
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
		ObjectivesCompleted++; // Keep track of all objectives completed
		QuestData->objectives[CurrentIndex].isObjectiveComplete = true;
	}
	else if (currentAmount < amountNeeded && QuestData->objectives[CurrentIndex].isObjectiveComplete)
	{
		ObjectivesCompleted--;
		QuestData->objectives[CurrentIndex].isObjectiveComplete = false;
	}
	
	if (currentAmount <= amountNeeded)
	{
		if (ObjectivesUpdatedDelegate.IsBound())
			ObjectivesUpdatedDelegate.Broadcast(this);
	}
}

void UAQ_Quest::OnQuestRequirementChange(int QuestID)
{
	for (auto requirementID : QuestData->questRequirements.QuestID)
	{
		if (requirementID == QuestID)
			QuestData->requirementsProgression.QuestID.Add(QuestID);
	}

	CheckIfRequiermentsMet();
}

void UAQ_Quest::OnLevelRequirementChange(int PlayerLevel)
{
	if (QuestData->questRequirements.PlayerLevel == PlayerLevel)
		QuestData->requirementsProgression.PlayerLevel = PlayerLevel;

	CheckIfRequiermentsMet();
}

void UAQ_Quest::CheckIfRequiermentsMet()
{
	FAQ_RequiermentData requierments = QuestData->questRequirements;
	FAQ_RequiermentData requiermentsProgression = QuestData->requirementsProgression;

	if (requierments.PlayerLevel != requiermentsProgression.PlayerLevel)
		return;

	for(auto requirementID : QuestData->questRequirements.QuestID)
	{
		if(!QuestData->requirementsProgression.QuestID.Contains(requirementID))
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
	case EAQ_NotifyEventType::Interact:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Interact)
			return true;
		break;

	case EAQ_NotifyEventType::Collect:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Collect)
			return true;
		break;

	case EAQ_NotifyEventType::RemovedFromInventory:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Collect)
			return true;
		break;

	case EAQ_NotifyEventType::Kill:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Kill)
			return true;
		break;

	case EAQ_NotifyEventType::Heal:
		break;

	case EAQ_NotifyEventType::Damage:
		break;

	case EAQ_NotifyEventType::Travel:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::Location)
			return true;
		break;

	case EAQ_NotifyEventType::PlayerLevelUp:
		if (QuestData->objectives[objectiveIndexP].objectiveType == EAQ_ObjectivesType::PlayerLevelUp)
			return true;
		break;
	}

	return false;
}
