// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_InventoryChannel.h"

UAQ_InventoryChannel::UAQ_InventoryChannel()
{
}

void UAQ_InventoryChannel::OnNotifyEvent_Implementation(UObject* entity)
{
	NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Collect);
}
