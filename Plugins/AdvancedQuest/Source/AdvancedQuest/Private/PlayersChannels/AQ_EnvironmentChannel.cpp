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

	case EAQ_EnvironmentEventType::Puzzle:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Puzzle);
		break;

	case EAQ_EnvironmentEventType::MiniGame:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::MiniGame);
		break;
	}

}
