// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/InventoryChannel.h"

UInventoryChannel::UInventoryChannel()
{
}

void UInventoryChannel::OnInteractionEvent(const UObject* entity, int UniqueObjectID)
{
	NotifySubjects_Implementation(entity, ENotifyEventType::Collect, UniqueObjectID);
}
