// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PlayerChannels.h"
#include "Player/InteractionChannel.h"
#include "Player/InventoryChannel.h"

UPlayerChannels::UPlayerChannels()
{
	/** Create all channels */
	interactionChannel = CreateDefaultSubobject<UInteractionChannel>(TEXT("Interaction Channel"));
	inventoryChannel = CreateDefaultSubobject<UInventoryChannel>(TEXT("Inventory Channel"));
}

void UPlayerChannels::AddObserver(UObject* entity, EObjectivesType eventType)
{
	switch (eventType)
	{
		/** Add Observer to Interaction Channel */
	case EObjectivesType::Interact:
		interactionChannel->AddObserver_Implementation(entity);
		break;
	case EObjectivesType::InteractUnique:
		interactionChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Combat Channel */
	case EObjectivesType::Kill:
		break;
	case  EObjectivesType::KillUnique:
		break;

		/** Add Observer to Inventory Channel */
	case EObjectivesType::Collect:
		inventoryChannel->AddObserver_Implementation(entity);
		break;
	case EObjectivesType::CollectUnique:
		inventoryChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Combat Channel */
	case EObjectivesType::Protect:
		break;
	case EObjectivesType::ProtectUnique:
		break;

		/** Add Observer to Player Channel */
	case EObjectivesType::Location:
		break;
	}
}

void UPlayerChannels::RemoveObserver(UObject* entity, EObjectivesType eventType)
{
	/** Remove Observer from Interaction Channel */
	if (eventType == EObjectivesType::Interact || eventType == EObjectivesType::InteractUnique)
	{
		interactionChannel->RemoveObserver_Implementation(entity);
		return;
	}

	/** Remove Observer from Inventory Channel */
	if (eventType == EObjectivesType::Collect || eventType == EObjectivesType::CollectUnique)
	{
		inventoryChannel->RemoveObserver_Implementation(entity);
		return;
	}

	/** Remove Observer from Combat Channel */
	if (eventType == EObjectivesType::Protect || eventType == EObjectivesType::ProtectUnique)
	{
		return;
	}

	/** Remove Observer from Player Channel */
	if (eventType == EObjectivesType::Location)
	{
		return;
	}




	//switch (eventType)
	//{
	//	/** Remove Observer to Interaction Channel */
	//case EObjectivesType::Interact :
	//	interactionChannel->RemoveObserver_Implementation(entity);
	//	break;
	//case EObjectivesType::InteractUnique :
	//	interactionChannel->RemoveObserver_Implementation(entity);
	//	break;

	//	/** Remove Observer to Combat Channel */
	//case EObjectivesType::Kill :
	//	break;
	//case  EObjectivesType::KillUnique :
	//	break;

	//	/** Remove Observer to Inventory Channel */
	//case EObjectivesType::Collect :
	//	inventoryChannel->RemoveObserver_Implementation(entity);
	//	break;
	//case EObjectivesType::CollectUnique:
	//	inventoryChannel->RemoveObserver_Implementation(entity);
	//	break;

	//	/** Remove Observer to Combat Channel */
	//case EObjectivesType::Protect :
	//	break;
	//case EObjectivesType::ProtectUnique :
	//	break;

	//	/** Remove Observer to Player Channel */
	//case EObjectivesType::Location:
	//	break;
	//}
}
