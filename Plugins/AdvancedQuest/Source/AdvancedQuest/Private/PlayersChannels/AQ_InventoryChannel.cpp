// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_InventoryChannel.h"

UAQ_InventoryChannel::UAQ_InventoryChannel()
{
}

void UAQ_InventoryChannel::OnInteractionEvent(UObject* entity, int UniqueObjectID)
{
	NotifySubjects_Implementation(entity, EAQ_NotifyEventType::Collect, UniqueObjectID);
}
