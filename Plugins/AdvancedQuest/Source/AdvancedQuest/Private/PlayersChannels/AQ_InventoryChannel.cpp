#include "PlayersChannels/AQ_InventoryChannel.h"

void UAQ_InventoryChannel::OnNotifyEvent_Implementation(UObject* entity)
{
	NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Collect);
}
