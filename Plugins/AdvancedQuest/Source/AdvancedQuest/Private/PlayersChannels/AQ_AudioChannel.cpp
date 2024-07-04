// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayersChannels/AQ_AudioChannel.h"

#include <Kismet/GameplayStatics.h>
#include "Sound/SoundBase.h"

void UAQ_AudioChannel::Play2DSound(UObject* WorldContext, USoundBase* SoundToPlay)
{
	if (!SoundToPlay || bIsMuted)
		return;

	UGameplayStatics::PlaySound2D(WorldContext, SoundToPlay);
}
