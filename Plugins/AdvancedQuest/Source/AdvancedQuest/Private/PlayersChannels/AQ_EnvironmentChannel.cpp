#include "PlayersChannels/AQ_EnvironmentChannel.h"

void UAQ_EnvironmentChannel::OnNotifyEvent_Implementation(UObject* entity)
{
	NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Travel);
}
