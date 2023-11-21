// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Enums/AQ_ObjectivesType.h"

#include "AQ_PlayerChannels.generated.h"

class UAQ_InteractionChannel;
class UAQ_InventoryChannel;

/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class ADVANCEDQUEST_API UAQ_PlayerChannels : public UObject
{
	GENERATED_BODY()
	
public:
	UAQ_PlayerChannels();

	/** Interaction Channel */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Channels")
	UAQ_InteractionChannel* interactionChannel;

	/** Inventory Channel */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Channels")
	UAQ_InventoryChannel* inventoryChannel;

	/** Add Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void AddObserver(UObject* entity, EAQ_ObjectivesType eventType);

	/** Remove Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void RemoveObserver(UObject* entity, EAQ_ObjectivesType eventType);
};
