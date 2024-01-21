#include "PlayersChannels/AQ_CombatChannel.h"

void UAQ_CombatChannel::OnCombatEventNotify(EAQ_CombatEventType eventType, UObject* entity, float amount)
{
	switch (eventType)
	{
	case EAQ_CombatEventType::Kill:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Kill);
		break;

	case EAQ_CombatEventType::Protect:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Protect);
		break;

	case EAQ_CombatEventType::Heal:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Heal, amount);
		break;

	case EAQ_CombatEventType::Damage:
		NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Damage, amount);
		break;
	}
}
