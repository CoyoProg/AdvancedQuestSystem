// Copyright 2024, Coyo Prog, All rights reserved.

#include "PlayersChannels/AQ_CombatChannel.h"
#include "Enums/AQ_NotifyEventType.h"

void UAQ_CombatChannel::OnCombatEventNotify(EAQ_CombatEventType eventType, UObject* entity, float amount)
{
	switch (eventType)
	{
	case EAQ_CombatEventType::Kill:
		OnKillEventDelegate.Broadcast(entity, EAQ_NotifyEventType::Kill, amount);
		break;

	case EAQ_CombatEventType::Protect:
		OnProtectEventDelegate.Broadcast(entity, EAQ_NotifyEventType::Protect, amount);
		break;

	case EAQ_CombatEventType::Heal:
		OnHealEventDelegate.Broadcast(entity, EAQ_NotifyEventType::Heal, amount);
		break;

	case EAQ_CombatEventType::Damage:
		OnDamageEventDelegate.Broadcast(entity, EAQ_NotifyEventType::Damage, amount);
		break;
	}
}
