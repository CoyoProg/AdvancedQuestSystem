// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayersChannels/AQ_PlayerChannels.h"
#include "PlayersChannels/AQ_InteractionChannel.h"
#include "PlayersChannels/AQ_InventoryChannel.h"
#include "PlayersChannels/AQ_QuestChannel.h"

UAQ_PlayerChannels::UAQ_PlayerChannels() :
	interactionChannel(nullptr),
	inventoryChannel(nullptr),
	questChannel(nullptr)
{
	/** Create all channels */
	interactionChannel = CreateDefaultSubobject<UAQ_InteractionChannel>(TEXT("Interaction Channel"));
	inventoryChannel = CreateDefaultSubobject<UAQ_InventoryChannel>(TEXT("Inventory Channel"));
	questChannel = CreateDefaultSubobject<UAQ_QuestChannel>(TEXT("Quest Channel"));

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

UAQ_PlayerChannels::~UAQ_PlayerChannels()
{
	interactionChannel = nullptr;
	inventoryChannel = nullptr;
	questChannel = nullptr;
}

void UAQ_PlayerChannels::AddObserver(UObject* entity, EAQ_ObjectivesType eventType)
{
	switch (eventType)
	{
		/** Add Observer to Interaction Channel */
	case EAQ_ObjectivesType::Interact:
		interactionChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Combat Channel */
	case EAQ_ObjectivesType::Kill:
		break;

		/** Add Observer to Inventory Channel */
	case EAQ_ObjectivesType::Collect:
		inventoryChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Combat Channel */
	case EAQ_ObjectivesType::Protect:
		break;

		/** Add Observer to Player Channel */
	case EAQ_ObjectivesType::Location:
		break;
	}
}

void UAQ_PlayerChannels::RemoveObserver(UObject* entity, EAQ_ObjectivesType eventType)
{
	switch (eventType)
	{
		/** Remove Observer from Interaction Channel */
	case EAQ_ObjectivesType::Interact:
		interactionChannel->RemoveObserver_Implementation(entity);
		break;

		/** Remove Observer from Combat Channel */
	case EAQ_ObjectivesType::Kill:
		break;

		/** Remove Observer from Inventory Channel */
	case EAQ_ObjectivesType::Collect:
		inventoryChannel->RemoveObserver_Implementation(entity);
		break;

		/** Remove Observer from Combat Channel */
	case EAQ_ObjectivesType::Protect:
		break;

		/** Remove Observer from Player Channel */
	case EAQ_ObjectivesType::Location:
		break;
	}
}

void UAQ_PlayerChannels::OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	switch (QuestState)
	{
	case EAQ_QuestState::Active:
		break;
	case EAQ_QuestState::Valid:
	{
		for (auto const& questObjectives : QuestUpdate->questData->objectives)
		{
			EAQ_ObjectivesType eventType = questObjectives.objectiveType;
			RemoveObserver(QuestUpdate, eventType);
		}

		break;
	}
	case EAQ_QuestState::Pending:
	{
		for (auto const& questObjectives : QuestUpdate->questData->objectives)
		{
			EAQ_ObjectivesType eventType = questObjectives.objectiveType;
			RemoveObserver(QuestUpdate, eventType);
		}

		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);

		break;
	}
	case EAQ_QuestState::Archive:
	{
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);

		/* Get all the rewards and pass them to the player */
		OnQuestEnded(QuestUpdate);
		//QuestUpdate->questData->xpReward;
		//QuestUpdate->questData->goldReward;
		//QuestUpdate->questData->itemsReward;

		break;
	}
	}
}

void UAQ_PlayerChannels::OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay)
{
	UAQ_BookQuest* bookQuest = questChannel->bookQuest;
	if (bookQuest)
		bookQuest->DisplayQuestGiverSummary(questsToDisplay);
}

void UAQ_PlayerChannels::OnPlayerLevelUp(int PlayerLevel)
{
	questChannel->OnPlayerLevelChange(PlayerLevel);
}

void UAQ_PlayerChannels::OnQuestCreated(UAQ_Quest* quest)
{
	switch (quest->questState)
	{
	case EAQ_QuestState::Active:
	{
		OnQuestEnable(quest);
		break;
	}

	case EAQ_QuestState::Pending:
	{
		if (quest->isRequirementMet)
			break;

		if (quest->questData->questRequirements.playerLevel != 0)
			questChannel->LevelRequirementChangedDelegate.AddDynamic(quest, &UAQ_Quest::OnLevelRequiermentChange);

		if (quest->questData->questRequirements.questID.Num() > 0)
			questChannel->QuestRequirementChangedDelegate.AddDynamic(quest, &UAQ_Quest::OnQuestRequiermentChange);

		quest->QuestRequirementMetDelegate.AddDynamic(questChannel, &UAQ_QuestChannel::OnQuestRequirementMet);
		break;
	}

	case EAQ_QuestState::Valid:
	{
		quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);
		quest->QuestStateChangedDelegate.AddDynamic(questChannel, &UAQ_QuestChannel::OnQuestStateChanged);
		
		/* Add the quest to the book quest*/
		UAQ_BookQuest* bookQuest = questChannel->bookQuest;
		if (bookQuest)
			bookQuest->AddQuest(quest);

		break;
	}

	case EAQ_QuestState::Archive:
		break;
	}
}

void UAQ_PlayerChannels::OnQuestEnable_Implementation(UAQ_Quest* quest)
{
	/* Subscribe the player Channel to the OnStateChanged delegate */
	quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);

	for (auto const& questObjectives : quest->questData->objectives)
	{
		EAQ_ObjectivesType eventType = questObjectives.objectiveType;
		AddObserver(quest, eventType);
	}

	/* Subscribe the quest Channel to the ObjectivesUpdate & OnStateChanged delegate*/
	quest->QuestStateChangedDelegate.AddDynamic(questChannel, &UAQ_QuestChannel::OnQuestStateChanged);
	quest->ObjectivesUpdatedDelegate.AddDynamic(questChannel, &UAQ_QuestChannel::OnQuestUpdate);

	/* Add the quest to the book quest*/
	UAQ_BookQuest* bookQuest = questChannel->bookQuest;
	if (bookQuest)
		bookQuest->AddQuest(quest);
}

void UAQ_PlayerChannels::BeginPlay()
{
	Super::BeginPlay();

	if (bookQuestWidget)
	{
		questChannel->SetWidgetClass(bookQuestWidget, GetOwner());
		questChannel->AddWidgetToViewport();
	}

	UAQ_BookQuest* bookQuest = questChannel->bookQuest;
	if(bookQuest)
		bookQuest->owner = this;

}

void UAQ_PlayerChannels::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	interactionChannel->ClearObservers();
	inventoryChannel->ClearObservers();
}
