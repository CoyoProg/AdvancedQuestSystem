// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_InventoryChannel.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_InventoryChannel : public UAQ_Channels
{
	GENERATED_BODY()
	
public:
	UAQ_InventoryChannel();

	UFUNCTION(BlueprintCallable, Category = "Events")
	void OnInteractionEvent(const UObject* entity, int UniqueObjectID = 0);
};
