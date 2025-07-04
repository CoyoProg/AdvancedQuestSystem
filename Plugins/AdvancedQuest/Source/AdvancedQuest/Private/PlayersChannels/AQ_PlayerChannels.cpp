// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_PlayerChannels.h"

#include "PlayersChannels/AQ_InventoryChannel.h"
#include "PlayersChannels/AQ_EnvironmentChannel.h"
#include "PlayersChannels/AQ_CombatChannel.h"
#include "PlayersChannels/AQ_StatsChannel.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include "PlayersChannels/AQ_AudioChannel.h"
#include <QuestSystem/AQ_QuestManager.h>
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_Quest.h"
#include "DataAssets/AQ_ItemData.h"
#include "DataAssets/AQ_QuestSounds.h"
#include "Enums/AQ_NotifyEventType.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


UAQ_PlayerChannels::UAQ_PlayerChannels() : Super()
{
	/** Create all channels */
	InventoryChannel = CreateDefaultSubobject<UAQ_InventoryChannel>(TEXT("AQ_InventoryChannel"));
	EnvironmentChannel = CreateDefaultSubobject<UAQ_EnvironmentChannel>(TEXT("AQ_EnvironmentChannel"));
	CombatChannel = CreateDefaultSubobject<UAQ_CombatChannel>(TEXT("AQ_CombatChannel"));
	StatsChannel = CreateDefaultSubobject<UAQ_StatsChannel>(TEXT("AQ_StatsChannel"));
	AudioChannel = CreateDefaultSubobject<UAQ_AudioChannel>(TEXT("AQ_AudioChannel"));
	QuestChannel = CreateDefaultSubobject<UAQ_QuestChannel>(TEXT("AQ_QuestChannel"));

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

	/* Setup Audio Channel & Sound Banks*/
	QuestChannel->AudioChannel = AudioChannel;
	QuestChannel->SoundBank = QuestSounds;

	InitQuestWidgets();
	SetPlayerInputComponent();

	LoadPlayerData();
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
		QuestWidgets->OnQuestEnableDelegate.AddUniqueDynamic(this, &UAQ_PlayerChannels::OnQuestEnable_Implementation);
	}
}

void UAQ_PlayerChannels::ForceInitQuestWidget()
{
	UAQ_BookQuest* QuestWidgets = QuestChannel->QuestWidgets;
	if (QuestWidgets)
	{
		QuestWidgets->PlayerController = GetWorld()->GetFirstPlayerController();
		QuestWidgets->OnQuestEnableDelegate.AddUniqueDynamic(this, &UAQ_PlayerChannels::OnQuestEnable_Implementation);
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
	{
		CombatChannel->OnKillEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Protect:
	{
		CombatChannel->OnProtectEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Heal:
	{
		CombatChannel->OnHealEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Damage:
	{
		CombatChannel->OnDamageEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
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
	{
		EnvironmentChannel->OnTravelEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Interact:
	{
		EnvironmentChannel->OnInteractEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::MiniGame:
	{
		EnvironmentChannel->OnMiniGameEventDelegate.AddUniqueDynamic(entity, &UAQ_Quest::OnNotify);
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
	{
		CombatChannel->OnKillEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Protect:
	{
		CombatChannel->OnProtectEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Heal:
	{
		CombatChannel->OnHealEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Damage:
	{
		CombatChannel->OnDamageEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
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
	{
		EnvironmentChannel->OnTravelEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::Interact:
	{
		EnvironmentChannel->OnInteractEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}
	case EAQ_ObjectivesType::MiniGame:
	{
		EnvironmentChannel->OnMiniGameEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
		break;
	}

	/* Remove Observer from Stats Channel */
	case EAQ_ObjectivesType::PlayerLevelUp:
	{
		StatsChannel->OnStatsEventDelegate.RemoveDynamic(entity, &UAQ_Quest::OnNotify);
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
		AudioChannel->bIsMuted = true;

		OnQuestEnable_Implementation(quest);
		if(QuestChannel->QuestWidgets)
			QuestChannel->QuestWidgets->OnLoadQuests(quest);

		AudioChannel->bIsMuted = false;
		break;
	}

	case EAQ_QuestState::Pending:
	{
		FAQ_RequiermentData& requirements = quest->QuestData->questRequirements;

		verifyf(
			IsValid(QuestChannel),
			TEXT("Quest Channel not valid! CHANNELS NOT INITIALIZED PROPERLY")
		);

		verifyf(
			IsValid(quest),
			TEXT("Quest not valid! Quest Creation failed")
		);

		/* Check the requirements & bind delegates */
		if (quest->bIsRequirementMet)
			break;

		if (!requirements.LevelMet)
			QuestChannel->LevelRequirementChangedDelegate.AddUniqueDynamic(quest, &UAQ_Quest::OnLevelRequirementChange);
		
		if (!requirements.AllEventsMet)
			QuestChannel->SpecialEventTriggerDelegate.AddUniqueDynamic(quest, &UAQ_Quest::OnEventRequirementChange);

		if (requirements.QuestID.Num() > 0)
		{
			for (auto questID = requirements.QuestID.CreateConstIterator(); questID; ++questID)
			{
				/* If the current Quest Requirement isn't met */
				if (QuestManager && !questID.Value())
				{
					/* Bind to its QuestStateChanged */
					UAQ_Quest* questRequirement = QuestManager->QueryQuest(questID.Key());

					if(questRequirement)
						questRequirement->QuestStateChangedDelegate.AddUniqueDynamic(quest, &UAQ_Quest::OnQuestRequirementChange);
				}
			}
		}
		break;
	}

	case EAQ_QuestState::Valid:
	{
		/* Bind delegates & add the Quest to the Book Quest*/
		quest->QuestStateChangedDelegate.AddUniqueDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);
		quest->QuestStateChangedDelegate.AddUniqueDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestStateChanged);

		QuestChannel->QuestWidgets->OnLoadQuests(quest);
		break;
	}

	default:
		break;
	}
}

void UAQ_PlayerChannels::OnQuestEnable_Implementation(UAQ_Quest* quest)
{
	QuestChannel->PlayQuestStartSound(quest);
	
	/* Subscribe the player Channel to the OnStateChanged delegate */
	quest->QuestStateChangedDelegate.AddUniqueDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);

	/* Subscribe the quest Channel to the ObjectivesUpdate & OnStateChanged delegate*/
	quest->QuestStateChangedDelegate.AddUniqueDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestStateChanged);
	quest->PositiveObjectiveUpdateDelegate.AddUniqueDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestProgress);
	quest->NegativeObjectiveUpdateDelegate.AddUniqueDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestRegression);

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

		case EAQ_ObjectivesType::QuestCompletion:
		{
			if (QuestManager->QueryQuest(questObjectives.questID)->QuestState == EAQ_QuestState::Archive)
			{
				currentAmount = 1;
			}
			else
			{
				QuestChannel->QuestCompletionDelegate.AddUniqueDynamic(quest, &UAQ_Quest::OnQuestCompletionNotify);
			}

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

			/* We mute the audio so their is no Objective Update Sound when a Quest Start */
			AudioChannel->bIsMuted = true;
			quest->UpdateQuestState();
			AudioChannel->bIsMuted = false;
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

	QuestChannel->OnPlayerLevelChange(PlayerLevel);
	StatsChannel->OnStatsEventNotify(EAQ_StatsEventType::PlayerLevelUp, GetOwner(), 1);
}

void UAQ_PlayerChannels::SaveGame()
{
	if (QuestManager)
		QuestManager->SaveQuestData();

	SavePlayerData();
}
