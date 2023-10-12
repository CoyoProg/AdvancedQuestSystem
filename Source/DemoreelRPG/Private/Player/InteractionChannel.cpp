// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/InteractionChannel.h"

UInteractionChannel::UInteractionChannel()
{
}

void UInteractionChannel::OnInteractionEvent(const UObject* entity, int UniqueObjectID)
{
	NotifySubjects_Implementation(entity, ENotifyEventType::Interact, UniqueObjectID);
}
