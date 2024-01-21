// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayersChannels/AQ_PlayerChannels.h"

#include "PlayersChannels/AQ_InventoryChannel.h"
#include "PlayersChannels/AQ_EnvironmentChannel.h"
#include "PlayersChannels/AQ_CombatChannel.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include <QuestSystem/AQ_QuestManager.h>
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_Quest.h"
#include "DataAssets/AQ_ItemData.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


UAQ_PlayerChannels::UAQ_PlayerChannels()
{
	/** Create all channels */
	InventoryChannel = CreateDefaultSubobject<UAQ_InventoryChannel>(TEXT("Inventory Channel"));
	EnvironmentChannel = CreateDefaultSubobject<UAQ_EnvironmentChannel>(TEXT("Environment Channel"));
	CombatChannel = CreateDefaultSubobject<UAQ_CombatChannel>(TEXT("Combat Channel"));
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

	InitBookQuestWidget();
	SetPlayerInputComponent();


	LoadInventory();
}

void UAQ_PlayerChannels::InitBookQuestWidget()
{
	if (!QuestChannel)
		return;

	/* Add the Quest Book Widget to the viewport */
	if (BookQuestWidget)
	{
		QuestChannel->SetWidgetClass(BookQuestWidget);
		QuestChannel->AddWidgetToViewport();
	}

	UAQ_BookQuest* BookQuest = QuestChannel->BookQuest;
	if (BookQuest)
	{
		BookQuest->PlayerController = GetWorld()->GetFirstPlayerController();
		BookQuest->OnQuestEnableDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestEnable_Implementation);
	}
}

void UAQ_PlayerChannels::SetPlayerInputComponent()
{
	UInputComponent* PlayerInputComponent = GetWorld()->GetFirstPlayerController()->InputComponent;

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Open Journal
		EnhancedInputComponent->BindAction(OpenJournalAction, ETriggerEvent::Started, QuestChannel->BookQuest, &UAQ_BookQuest::OpenJournal);
		
		// Save Quests
		EnhancedInputComponent->BindAction(SaveQuestsAction, ETriggerEvent::Started, this, &UAQ_PlayerChannels::SaveGame);

	}
}

void UAQ_PlayerChannels::AddObserver(UObject* entity, EAQ_ObjectivesType eventType)
{
	switch (eventType)
	{
		/** Add Observer to Interaction Channel */
		/** Add Observer to Combat Channel */
	case EAQ_ObjectivesType::Kill:
		CombatChannel->AddObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Protect:
		CombatChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Inventory Channel */
	case EAQ_ObjectivesType::Collect:
		InventoryChannel->AddObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Deliver:
		InventoryChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Environment Channel */
	case EAQ_ObjectivesType::Location:
		EnvironmentChannel->AddObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Interact:
		EnvironmentChannel->AddObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::MiniGame:
		EnvironmentChannel->AddObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Puzzle:
		EnvironmentChannel->AddObserver_Implementation(entity);
		break;
	}
}

void UAQ_PlayerChannels::RemoveObserver(UObject* entity, EAQ_ObjectivesType eventType)
{
	switch (eventType)
	{
		/** Remove Observer from Combat Channel */
	case EAQ_ObjectivesType::Kill:
		CombatChannel->RemoveObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Protect:
		CombatChannel->RemoveObserver_Implementation(entity);
		break;

		/** Remove Observer from Inventory Channel */
	case EAQ_ObjectivesType::Collect:
		InventoryChannel->RemoveObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Deliver:
		InventoryChannel->RemoveObserver_Implementation(entity);
		break;

		/** Remove Observer from Environment Channel */
	case EAQ_ObjectivesType::Location:
		EnvironmentChannel->RemoveObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Interact:
		EnvironmentChannel->RemoveObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::MiniGame:
		EnvironmentChannel->RemoveObserver_Implementation(entity);
		break;

	case EAQ_ObjectivesType::Puzzle:
		EnvironmentChannel->RemoveObserver_Implementation(entity);
		break;
	}
}

void UAQ_PlayerChannels::OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState)
{
	switch (QuestState)
	{
	case EAQ_QuestState::Pending:
	case EAQ_QuestState::Failed:
	{
		/* Remove all the Quest's Observers when the Quest is Pending or Failed */
		for (auto const& questObjectives : QuestUpdate->QuestData->objectives)
		{
			EAQ_ObjectivesType eventType = questObjectives.objectiveType;
			RemoveObserver(QuestUpdate, eventType);

			if (eventType == EAQ_ObjectivesType::PlayerLevelUp)
			{
				if (Observers.Contains(QuestUpdate))
					Observers.Remove(QuestUpdate);
			}
		}

		/* Remove the Player Channels from the Quest State Changed delegate */
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);
		break;
	}

	case EAQ_QuestState::Archive:
	{
		/* Remove all the Quest's Observers when the Quest is Done */
		for (auto const& questObjectives : QuestUpdate->QuestData->objectives)
		{
			if ((questObjectives.objectiveType == EAQ_ObjectivesType::Collect
				|| questObjectives.objectiveType == EAQ_ObjectivesType::Deliver)
				&& questObjectives.itemTarget)
			{
				if(questObjectives.itemTarget->itemType == EAQ_ItemType::Quest)
					Execute_RemoveItemFromInvetory(this, questObjectives.itemTarget, 1, true);
			}

			EAQ_ObjectivesType eventType = questObjectives.objectiveType;
			RemoveObserver(QuestUpdate, eventType);

			if (eventType == EAQ_ObjectivesType::PlayerLevelUp)
			{
				if (Observers.Contains(QuestUpdate))
					Observers.Remove(QuestUpdate);
			}
		}

		/* Remove the Player Channels from the Quest State Changed delegate */
		QuestUpdate->QuestStateChangedDelegate.RemoveDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);

		/* Get all the rewards and pass them to the player */
		OnQuestEnded(QuestUpdate); // Implemented in Blueprints
		break;
	}

	default:
		break;
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
		if(QuestChannel->BookQuest)
			QuestChannel->BookQuest->OnLoadQuests(quest);
		break;
	}

	case EAQ_QuestState::Pending:
	{
		/* Check the requirements & bind delegates */
		if (quest->bIsRequirementMet)
			break;

		if (quest->QuestData->questRequirements.PlayerLevel != 0)
			QuestChannel->LevelRequirementChangedDelegate.AddDynamic(quest, &UAQ_Quest::OnLevelRequirementChange);
		
		if (quest->QuestData->questRequirements.QuestID.Num() > 0)
			QuestChannel->QuestRequirementChangedDelegate.AddDynamic(quest, &UAQ_Quest::OnQuestRequirementChange);

		quest->QuestRequirementMetDelegate.AddDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestRequirementMet);
		break;
	}

	case EAQ_QuestState::Valid:
	{
		/* Bind delegates & add the Quest to the Book Quest*/
		quest->QuestStateChangedDelegate.AddDynamic(this, &UAQ_PlayerChannels::OnQuestStateChanged);
		quest->QuestStateChangedDelegate.AddDynamic(QuestChannel, &UAQ_QuestChannel::OnQuestStateChanged);

		QuestChannel->BookQuest->OnLoadQuests(quest);
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
			Observers.AddUnique(quest);

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
				quest->ObjectivesCompleted++;

			quest->UpdateQuestState();
		}
	}
}

void UAQ_PlayerChannels::OnEnvironmentEventNotify_Implementation(EAQ_EnvironmentEventType eventType, UObject* entity)
{
	EnvironmentChannel->OnEnvironmentEventNotify(eventType, entity);
}

void UAQ_PlayerChannels::OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay)
{
	/* Get the Book Quest and Display the Quests */
	UAQ_BookQuest* BookQuest = QuestChannel->BookQuest;

	if (BookQuest)
		BookQuest->DisplayQuestGiverSummary(questsToDisplay);
}

void UAQ_PlayerChannels::OnPlayerLevelUp()
{
	PlayerLevel++;

	NotifyObservers(GetOwner(), EAQ_NotifyEventType::PlayerLevelUp);
	QuestChannel->OnPlayerLevelChange(PlayerLevel);
}


void UAQ_PlayerChannels::NotifyObservers(UObject* entity, EAQ_NotifyEventType eventType, float amount)
{
	int Range = Observers.Num();
	if (Range == 0)
		return;

	for (int Index = Range - 1; Index > -1; --Index)
	{
		IAQ_Observer::Execute_OnNotify(Observers[Index], entity, eventType, amount);
	}
}

void UAQ_PlayerChannels::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	/* Because some value are persistent between play in editor,
	We need to clear all the Observers at the end of a play */
	InventoryChannel->ClearObservers();
	CombatChannel->ClearObservers();
	EnvironmentChannel->ClearObservers();
	QuestChannel->ClearObservers();

	Observers.Empty();
}

void UAQ_PlayerChannels::SaveGame()
{
	UAQ_QuestManager* questManager = GetOwner()->GetComponentByClass<UAQ_QuestManager>();
	if (questManager)
		questManager->SaveQuestData();

	SaveInventory();
}
