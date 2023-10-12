// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Channels.h"
#include "InteractionChannel.generated.h"

/**
 * 
 */
UCLASS()
class DEMOREELRPG_API UInteractionChannel : public UChannels
{
	GENERATED_BODY()

public:
	UInteractionChannel();

	UFUNCTION(BlueprintCallable, Category = "Events")
	void OnInteractionEvent(const UObject* entity, int UniqueObjectID = 0);
};
