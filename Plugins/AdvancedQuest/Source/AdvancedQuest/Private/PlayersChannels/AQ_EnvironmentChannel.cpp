// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_EnvironmentChannel.h"
#include "Enums/AQ_NotifyEventType.h"

const int DEFAULT_AMOUNT = 1;

void UAQ_EnvironmentChannel::OnEnvironmentEventNotify(EAQ_EnvironmentEventType eventType, UObject* entity)
{
	switch (eventType)
	{
	case EAQ_EnvironmentEventType::Interact:
		OnEnvironmentEventDelegate.Broadcast(entity, EAQ_NotifyEventType::Interact, DEFAULT_AMOUNT);
		break;

	case EAQ_EnvironmentEventType::Travel:
		OnEnvironmentEventDelegate.Broadcast(entity, EAQ_NotifyEventType::Travel, DEFAULT_AMOUNT);
		break;

	case EAQ_EnvironmentEventType::MiniGame:
		OnEnvironmentEventDelegate.Broadcast(entity, EAQ_NotifyEventType::MiniGame, DEFAULT_AMOUNT);
		break;
	}
}
