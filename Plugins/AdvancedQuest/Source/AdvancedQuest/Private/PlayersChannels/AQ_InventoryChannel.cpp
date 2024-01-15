#include "PlayersChannels/AQ_InventoryChannel.h"

void UAQ_InventoryChannel::OnInventoryEventNotify(EAQ_InventoryEventType eventType, UObject* entity)
{
	switch (eventType)
	{
	case EAQ_InventoryEventType::Collect:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Collect);
		break;
	}
}
