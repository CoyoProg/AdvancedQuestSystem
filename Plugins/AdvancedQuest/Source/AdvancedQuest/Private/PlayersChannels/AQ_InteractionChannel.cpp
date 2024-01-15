#include "PlayersChannels/AQ_InteractionChannel.h"

void UAQ_InteractionChannel::OnInteractionEventNotify(EAQ_InteractionEventType eventType, UObject* entity)
{
	switch (eventType)
	{
	case EAQ_InteractionEventType::Interact:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Interact);
		break;
	}
}
