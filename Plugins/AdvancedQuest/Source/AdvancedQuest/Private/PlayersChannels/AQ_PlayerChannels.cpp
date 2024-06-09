// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_PlayerChannels.h"

#include "PlayersChannels/AQ_InventoryChannel.h"
#include "PlayersChannels/AQ_EnvironmentChannel.h"
#include "PlayersChannels/AQ_CombatChannel.h"
#include "PlayersChannels/AQ_StatsChannel.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include <QuestSystem/AQ_QuestManager.h>
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_Quest.h"
#include "DataAssets/AQ_ItemData.h"
#include "Enums/AQ_NotifyEventType.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


UAQ_PlayerChannels::UAQ_PlayerChannels()
{
	/** Create all channels */
	InventoryChannel = CreateDefaultSubobject<UAQ_InventoryChannel>(TEXT("Inventory Channel"));
	EnvironmentChannel = CreateDefaultSubobject<UAQ_EnvironmentChannel>(TEXT("Environment Channel"));
	CombatChannel = CreateDefaultSubobject<UAQ_CombatChannel>(TEXT("Combat Channel"));
	StatsChannel = CreateDefaultSubobject<UAQ_StatsChannel>(TEXT("Stats Channel"));
	QuestChannel = CreateDefaultSubobject<UAQ_QuestChannel>(TEXT("Quest Channel"));

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

UAQ_PlayerChannels::~UAQ_PlayerChannels()
{
}

void UAQ_PlayerChannels::BeginPlay()
{
	Super::BeginPlay();

	if (!QuestChannel)
	{
		UE_LOG(LogTemp, Warning, TEXT("CHANNELS NOT INITIALIZED PROPERLY"));
		return;
	}

	QuestManager = GetOwner()->FindComponentByClass<UAQ_QuestManager>();

	InitQuestWidgets();
	SetPlayerInputComponent();

	LoadInventory();
}

void UAQ_PlayerChannels::InitQuestWidgets()
{
	/* Add the Quest Book Widget to the viewport */
	if (QuestWidgetsClass)
	{
		QuestChannel->SetWidgetClass(QuestWidgetsClass);
		QuestChannel->AddWidgetToViewport();
	}

	UAQ_BookQuest* QuestWidgets = QuestChannel->QuestWidgets;
	if (QuestWidgets)
	{
		QuestWidgets->PlayerController = GetWorld()->GetFirstPlayerController();
		QuestWidgets->OnQuestEnableDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestEnable_Implementation);
	}
}

void UAQ_PlayerChannels::ForceInitQuestWidget()
{
	UAQ_BookQuest* QuestWidgets = QuestChannel->QuestWidgets;
	if (QuestWidgets)
	{
		QuestWidgets->PlayerController = GetWorld()->GetFirstPlayerController();
		QuestWidgets->OnQuestEnableDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestEnable_Implementation);
	}

	SetPlayerInputComponent();
}

void UAQ_PlayerChannels::SetPlayerInputComponent()
{
	UInputComponent* PlayerInputComponent = GetWorld()->GetFirstPlayerController()->InputComponent;

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Open Journal
		EnhancedInputComponent->BindAction(OpenJournalAction, ETriggerEvent::Started, QuestChannel->QuestWidgets, &UAQ_BookQuest::OpenQuestLog);
		
		// Save Quests
		EnhancedInputComponent->BindAction(SaveQuestsAction, ETriggerEvent::Started, this, &UAQ_PlayerChannels::SaveGame);

	}
}

void UAQ_PlayerChannels::AddObserver(UAQ_Quest* entity, EAQ_ObjectivesType eventType)
{
	switch (eventType)
	{
	/** Add Observer to Combat Channel */
	case EAQ_ObjectivesType::Kill:
	case EAQ_ObjectivesType::Protect:
	{
		CombatChannel->OnCombatEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}

	/** Add Observer to Inventory Channel */
	case EAQ_ObjectivesType::Collect:
	case EAQ_ObjectivesType::Deliver:
	{
		InventoryChannel->OnInventoryEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}

	/** Add Observer to Environment Channel */
	case EAQ_ObjectivesType::Location:
	case EAQ_ObjectivesType::Interact:
	case EAQ_ObjectivesType::MiniGame:
	{
		EnvironmentChannel->OnEnvironmentEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}

	/* Add Observer to Stats Channel */
	case EAQ_ObjectivesType::PlayerLevelUp:
	{
		StatsChannel->OnStatsEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	}
}

void UAQ_PlayerChannels::RemoveObserver(UAQ_Quest* entity, EAQ_ObjectivesType eventType)
{
	switch (eventType)
	{
	/** Remove Observer from Combat Channel */
	case EAQ_ObjectivesType::Kill:
	case EAQ_ObjectivesType::Protect:
	{
		CombatChannel->OnCombatEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}

	/** Remove Observer from Inventory Channel */
	case EAQ_ObjectivesType::Collect:
	case EAQ_ObjectivesType::Deliver:
	{
		InventoryChannel->OnInventoryEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}

	/** Remove Observer from Environment Channel */
	case EAQ_ObjectivesType::Location:
	case EAQ_ObjectivesType::Interact:
	case EAQ_ObjectivesType::MiniGame:
	{
		EnvironmentChannel->OnEnvironmentEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}

	/* Remove Observer from Stats Channel */
	case EAQ_ObjectivesType::PlayerLevelUp:
	{
		StatsChannel->OnStatsEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		//OnPlayerEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	}
}

void UAQ_PlayerChannels::OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	switch (QuestState)
	{
	case EAQ_QuestState::Pending:
	case EAQ_QuestState::Failed:
	case EAQ_QuestState::Archive:
	{
		/* Remove all the Quest's Observers when the Quest is Pending or Failed */
		for (auto const& questObjectives : QuestUpdate->QuestData->objectives)
		{
			EAQ_ObjectivesType eventType = questObjectives.objectiveType;
			RemoveObserver(QuestUpdate, eventType);

			/* Remove all the quest items */
			if ((questObjectives.objectiveType == EAQ_ObjectivesType::Collect 
				&& questObjectives.itemTarget
				&& questObjectives.itemTarget->itemType == EAQ_ItemType::Quest)
				|| questObjectives.objectiveType == EAQ_ObjectivesType::Deliver)
				Execute_RemoveItemFromInvetory(this, questObjectives.itemTarget, 1, true);
		}

		/* Remove the Player Channels from the Quest State Changed delegate */
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);
		break;
	}

	default:
		break;
	}

	if (QuestState == EAQ_QuestState::Archive)
	{
		/* Get all the rewards and pass them to the player */
		OnQuestEnded(QuestUpdate); // Implemented in Blueprints
	}
}

void UAQ_PlayerChannels::OnQuestCreated(UAQ_Quest* quest)
{
	/* This function is called by the Quest Manager at the Load of each game 
		It will load prior save and update all the quest & Observers accordingly */
	switch (quest->QuestState)
	{
	case EAQ_QuestState::Active:
	{
		OnQuestEnable_Implementation(quest);
		if(QuestChannel->QuestWidgets)
			QuestChannel->QuestWidgets->OnLoadQuests(quest);
		break;
	}

	case EAQ_QuestState::Pending:
	{
		FAQ_RequiermentData& requirements = quest->QuestData->questRequirements;

		/* Check the requirements & bind delegates */
		if (quest->bIsRequirementMet)
			break;

		if (!requirements.LevelMet)
			QuestChannel->LevelRequirementChangedDelegate.AddDynamic(quest, &UAQ_Quest::OnLevelRequirementChange);
		
		if (!requirements.AllEventsMet)
			QuestChannel->SpecialEventTriggerDelegate.AddDynamic(quest, &UAQ_Quest::OnEventRequirementChange);


		if (requirements.QuestID.Num() > 0)
		{
			for (auto questID = requirements.QuestID.CreateConstIterator(); questID; ++questID)
			{
				/* If the current Quest Requirement isn't met */
				if (QuestManager && !questID.Value())
				{
					/* Bind to its QuestStateChanged */
					UAQ_Quest* questRequirement = QuestManager->QueryQuest(questID.Key());
					questRequirement->QuestStateChangedDelegate.AddUniqueDynamic(quest, &UAQ_Quest::OnQuestRequirementChange);
				}
			}
		}
		break;
	}

	case EAQ_QuestState::Valid:
	{
		/* Bind delegates & add the Quest to the Book Quest*/
		quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);
		quest->QuestStateChangedDelegate.AddDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestStateChanged);

		QuestChannel->QuestWidgets->OnLoadQuests(quest);
		break;
	}

	default:
		break;
	}
}

void UAQ_PlayerChannels::OnQuestEnable_Implementation(UAQ_Quest* quest)
{
	/* Subscribe the player Channel to the OnStateChanged delegate */
	quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);

	/* Subscribe the quest Channel to the ObjectivesUpdate & OnStateChanged delegate*/
	quest->QuestStateChangedDelegate.AddDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestStateChanged);
	quest->ObjectivesUpdatedDelegate.AddDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestUpdate);

	/* Add the quest as Observer to the different channels */
	for (auto& questObjectives : quest->QuestData->objectives)
	{
		EAQ_ObjectivesType eventType = questObjectives.objectiveType;
		AddObserver(quest, eventType);

		int currentAmount = 0;
		switch (eventType)
		{
		case EAQ_ObjectivesType::PlayerLevelUp:
		{
			/* Update the Objective target of this type of quest */
			questObjectives.objectTarget = GetOwner()->GetClass();

			/* Check the Player stats (Can be anything from Player's Level,
			to Achievements, Professions Level...) */
			currentAmount = CheckForPlayerStats(questObjectives);

			break;
		}

		case  EAQ_ObjectivesType::Collect:
		{
			/* Check if there is already the itemTarget in the inventory */
			currentAmount = CheckInventoryForItem(questObjectives);
			break;
		}

		case EAQ_ObjectivesType::Deliver:
		{ 
			if (!questObjectives.itemTarget)
				break;

			/* Check if the item is already there (to not add it at every load)
			and add the item that need to be delivered into the inventory */
			currentAmount = CheckInventoryForItem(questObjectives);
			if (currentAmount == 0)
			{
				currentAmount = questObjectives.amountNeeded;


				Execute_AddItemToInvetory(this, questObjectives.itemTarget, currentAmount);
			}
			break;
		}
		}

		if (currentAmount > 0 || questObjectives.amountNeeded == 0)
		{
			/* Update the current amount of the quest */
			questObjectives.CurrentAmount = currentAmount;
			if (currentAmount >= questObjectives.amountNeeded)
				questObjectives.isObjectiveComplete = true;

			quest->UpdateQuestState();
		}
	}
}

void UAQ_PlayerChannels::OnEnvironmentEventNotify_Implementation(EAQ_EnvironmentEventType eventType, UObject* entity)
{
	EnvironmentChannel->OnEnvironmentEventNotify(eventType, entity);
}

void UAQ_PlayerChannels::OnCombatEventNotify_Implementation(EAQ_CombatEventType eventType, UObject* entity, float amount)
{
	CombatChannel->OnCombatEventNotify(eventType, entity, amount);
}

void UAQ_PlayerChannels::OnStatsEventNotify_Implementation(EAQ_StatsEventType eventType, UObject* entity, float amount)
{
	StatsChannel->OnStatsEventNotify(eventType, entity, amount);
}

void UAQ_PlayerChannels::OnSpecialEventNotify_Implementation(UAQ_SpecialEventData* specialEvent)
{
	if (!QuestManager)
		return;

	QuestChannel->OnSpecialEventTrigger(specialEvent);
}

void UAQ_PlayerChannels::OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay)
{
	/* Get the Book Quest and Display the Quests */
	UAQ_BookQuest* QuestWidgets = QuestChannel->QuestWidgets;

	if (QuestWidgets)
		QuestWidgets->DisplayQuestGiverSummary(questsToDisplay);
}


void UAQ_PlayerChannels::LevelUp()
{
	PlayerLevel++;

	StatsChannel->OnStatsEventNotify(EAQ_StatsEventType::PlayerLevelUp, GetOwner(), 1);
}

void UAQ_PlayerChannels::SaveGame()
{
	if (QuestManager)
		QuestManager->SaveQuestData();

	SaveInventory();
}
