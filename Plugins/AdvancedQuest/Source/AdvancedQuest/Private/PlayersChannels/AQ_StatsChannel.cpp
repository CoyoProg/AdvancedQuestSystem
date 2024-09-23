// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_StatsChannel.h"
#include "Enums/AQ_NotifyEventType.h"

void UAQ_StatsChannel::OnStatsEventNotify(EAQ_StatsEventType eventType, UObject* entity, float amount)
{
	switch (eventType)
	{
		case EAQ_StatsEventType::PlayerLevelUp:
			OnStatsEventDelegate.Broadcast(entity, EAQ_NotifyEventType::PlayerLevelUp, amount);
	}
}
