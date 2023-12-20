// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayersChannels/AQ_InteractionChannel.h"

UAQ_InteractionChannel::UAQ_InteractionChannel()
{
}

UAQ_InteractionChannel::~UAQ_InteractionChannel()
{
}

void UAQ_InteractionChannel::OnNotifyEvent_Implementation(UObject* entity)
{
	NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Interact);
}
