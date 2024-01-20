#include "PlayersChannels/AQ_EnvironmentChannel.h"

void UAQ_EnvironmentChannel::OnEnvironmentEventNotify(EAQ_EnvironmentEventType eventType, UObject* entity)
{
	switch (eventType)
	{
	case EAQ_EnvironmentEventType::Interact:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Interact);
		break;

	case EAQ_EnvironmentEventType::Travel:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Travel);
		break;
	}

}
