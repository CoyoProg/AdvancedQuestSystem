#include "PlayersChannels/AQ_InventoryChannel.h"

void UAQ_InventoryChannel::OnInventoryEventNotify(EAQ_InventoryEventType eventType, UObject* entity, float amount)
{
	switch (eventType)
	{
	case EAQ_InventoryEventType::Collect:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Collect, amount);
		break;

	case EAQ_InventoryEventType::RemoveFromInventory:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::RemovedFromInventory, -amount);
		break;
	}
}
