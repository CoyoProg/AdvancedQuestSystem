// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_PlayerChannels.h"

#include "PlayersChannels/AQ_InteractionChannel.h"
#include "PlayersChannels/AQ_InventoryChannel.h"
#include "PlayersChannels/AQ_QuestChannel.h"
#include "QuestSystem/AQ_BookQuest.h"

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

void UAQ_PlayerChannels::BeginPlay()
{
	Super::BeginPlay();

	if (bookQuestWidget)
	{
		questChannel->SetWidgetClass(bookQuestWidget, GetOwner());
		questChannel->AddWidgetToViewport();
	}

	/* We Create all the quest Asynchrounously,
	   Only the first time that the game is Played */
	if (IsNewGame)
	{
		AsyncTask(ENamedThreads::GameThread, [this]()
			{
				questChannel->CreateAllQuests();
			});
	
		IsNewGame = false;
	}
}

void UAQ_PlayerChannels::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* OwnerActor = GetOwner();
	if (OwnerActor)
	{
		APlayerController* OwnerPlayerController = Cast<APlayerController>(OwnerActor->GetInstigatorController());

		if (OwnerPlayerController)
		{
			if (OwnerPlayerController->WasInputKeyJustReleased(EKeys::J))
			{
				questChannel->GetWidget()->OpenJournal();
			}
		}
	}
}
