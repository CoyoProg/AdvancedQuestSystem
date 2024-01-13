#include "PlayersChannels/AQ_InteractionChannel.h"

void UAQ_InteractionChannel::OnNotifyEvent_Implementation(UObject* entity)
{
	NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Interact);
}
