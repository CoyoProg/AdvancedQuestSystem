// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AQ_AudioChannel.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_AudioChannel : public UObject
{
	GENERATED_BODY()
	
public:
	void Play2DSound(USoundBase* SoundToPlay);

	UObject* CurrentWorldContext;

private:
	UAudioComponent* AudioSound;
};
