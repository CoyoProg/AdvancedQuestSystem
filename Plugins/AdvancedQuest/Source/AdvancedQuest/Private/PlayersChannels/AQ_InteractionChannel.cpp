// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_InteractionChannel.h"

UAQ_InteractionChannel::UAQ_InteractionChannel()
{
}

UAQ_InteractionChannel::~UAQ_InteractionChannel()
{
}

void UAQ_InteractionChannel::OnInteractionEvent(UObject* entity, int UniqueObjectID)
{
	NotifySubjects_Implementation(entity, EAQ_NotifyEventType::Interact, UniqueObjectID);
}
