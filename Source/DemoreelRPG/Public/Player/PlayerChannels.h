// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Enums/ObjectivesType.h"
#include "PlayerChannels.generated.h"

class UInteractionChannel;
class UInventoryChannel;

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class DEMOREELRPG_API UPlayerChannels : public UObject
{
	GENERATED_BODY()

public:
	UPlayerChannels();

	/** Interaction Channel */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Channels")
	UInteractionChannel* interactionChannel;

	/** Inventory Channel */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Channels")
	UInventoryChannel* inventoryChannel;

	/** Add Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void AddObserver(UObject* entity, EObjectivesType eventType);

	/** Remove Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void RemoveObserver(UObject* entity, EObjectivesType eventType);
};