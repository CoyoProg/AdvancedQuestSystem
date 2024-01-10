// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayersChannels/AQ_EnvironmentChannel.h"

void UAQ_EnvironmentChannel::OnNotifyEvent_Implementation(UObject* entity)
{
	NotifyObservers_Implementation(entity, EAQ_NotifyEventType::Travel);
}
