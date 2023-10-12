// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/Channels.h"
#include "InventoryChannel.generated.h"

/**
 * 
 */
UCLASS()
class DEMOREELRPG_API UInventoryChannel : public UChannels
{
	GENERATED_BODY()
	
public:
	UInventoryChannel();

	UFUNCTION(BlueprintCallable, Category = "Events")
	void OnInteractionEvent(const UObject* entity, int UniqueObjectID = 0);
};
