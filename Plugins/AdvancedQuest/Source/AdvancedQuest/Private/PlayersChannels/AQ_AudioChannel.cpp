// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayersChannels/AQ_AudioChannel.h"

#include <Kismet/GameplayStatics.h>
#include "Components/AudioComponent.h"
void UAQ_AudioChannel::Play2DSound(USoundBase* SoundToPlay)
{
	if (!SoundToPlay || bIsMuted)
		return;
	
	if(AudioSound && AudioSound->IsPlaying())
		AudioSound->Stop();
	
	AudioSound = UGameplayStatics::SpawnSound2D(CurrentWorldContext, SoundToPlay);
}
