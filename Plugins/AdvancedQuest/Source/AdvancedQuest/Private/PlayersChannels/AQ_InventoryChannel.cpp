// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_InventoryChannel.h"
#include "Enums/AQ_NotifyEventType.h"

void UAQ_InventoryChannel::OnInventoryEventNotify(EAQ_InventoryEventType eventType, UObject* entity, float amount)
{
	switch (eventType)
	{
	case EAQ_InventoryEventType::Collect:
		OnInventoryEventDelegate.Broadcast(entity, EAQ_NotifyEventType::Collect, amount);
		break;

	case EAQ_InventoryEventType::RemoveFromInventory:
		OnInventoryEventDelegate.Broadcast(entity, EAQ_NotifyEventType::RemovedFromInventory, -amount);
		break;
	}
}
