// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_CombatChannel.h"

void UAQ_CombatChannel::OnCombatEventNotify(EAQ_CombatEventType eventType, UObject* entity)
{
	switch (eventType)
	{
	case EAQ_CombatEventType::Kill:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Kill);
		break;

	case EAQ_CombatEventType::Heal:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Heal);
		break;

	case EAQ_CombatEventType::Damage:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Damage);
		break;
	}
}
