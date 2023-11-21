// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_PlayerChannels.h"

#include "PlayersChannels/AQ_InteractionChannel.h"
#include "PlayersChannels/AQ_InventoryChannel.h"

UAQ_PlayerChannels::UAQ_PlayerChannels()
{
	/** Create all channels */
	interactionChannel = CreateDefaultSubobject<UAQ_InteractionChannel>(TEXT("Interaction Channel"));
	inventoryChannel = CreateDefaultSubobject<UAQ_InventoryChannel>(TEXT("Inventory Channel"));
}

void UAQ_PlayerChannels::AddObserver(UObject* entity, EAQ_ObjectivesType eventType)
{
	switch (eventType)
	{
		/** Add Observer to Interaction Channel */
	case EAQ_ObjectivesType::Interact:
		interactionChannel->AddObserver_Implementation(entity);
		break;
	case EAQ_ObjectivesType::InteractUnique:
		interactionChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Combat Channel */
	case EAQ_ObjectivesType::Kill:
		break;
	case  EAQ_ObjectivesType::KillUnique:
		break;

		/** Add Observer to Inventory Channel */
	case EAQ_ObjectivesType::Collect:
		inventoryChannel->AddObserver_Implementation(entity);
		break;
	case EAQ_ObjectivesType::CollectUnique:
		inventoryChannel->AddObserver_Implementation(entity);
		break;

		/** Add Observer to Combat Channel */
	case EAQ_ObjectivesType::Protect:
		break;
	case EAQ_ObjectivesType::ProtectUnique:
		break;

		/** Add Observer to Player Channel */
	case EAQ_ObjectivesType::Location:
		break;
	}
}

void UAQ_PlayerChannels::RemoveObserver(UObject* entity, EAQ_ObjectivesType eventType)
{
	/** Remove Observer from Interaction Channel */
	if (eventType == EAQ_ObjectivesType::Interact || eventType == EAQ_ObjectivesType::InteractUnique)
	{
		interactionChannel->RemoveObserver_Implementation(entity);
		return;
	}

	/** Remove Observer from Inventory Channel */
	if (eventType == EAQ_ObjectivesType::Collect || eventType == EAQ_ObjectivesType::CollectUnique)
	{
		inventoryChannel->RemoveObserver_Implementation(entity);
		return;
	}

	/** Remove Observer from Combat Channel */
	if (eventType == EAQ_ObjectivesType::Protect || eventType == EAQ_ObjectivesType::ProtectUnique)
	{
		return;
	}

	/** Remove Observer from Player Channel */
	if (eventType == EAQ_ObjectivesType::Location)
	{
		return;
	}

	//switch (eventType)
	//{
	//	/** Remove Observer to Interaction Channel */
	//case EAQ_ObjectivesType::Interact :
	//	interactionChannel->RemoveObserver_Implementation(entity);
	//	break;
	//case EAQ_ObjectivesType::InteractUnique :
	//	interactionChannel->RemoveObserver_Implementation(entity);
	//	break;

	//	/** Remove Observer to Combat Channel */
	//case EAQ_ObjectivesType::Kill :
	//	break;
	//case  EAQ_ObjectivesType::KillUnique :
	//	break;

	//	/** Remove Observer to Inventory Channel */
	//case EAQ_ObjectivesType::Collect :
	//	inventoryChannel->RemoveObserver_Implementation(entity);
	//	break;
	//case EAQ_ObjectivesType::CollectUnique:
	//	inventoryChannel->RemoveObserver_Implementation(entity);
	//	break;

	//	/** Remove Observer to Combat Channel */
	//case EAQ_ObjectivesType::Protect :
	//	break;
	//case EAQ_ObjectivesType::ProtectUnique :
	//	break;

	//	/** Remove Observer to Player Channel */
	//case EAQ_ObjectivesType::Location:
	//	break;
	//}
}
