// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Enums/AQ_ObjectivesType.h"

#include "AQ_PlayerChannels.generated.h"

class UAQ_InteractionChannel;
class UAQ_InventoryChannel;
class UAQ_QuestChannel;
class UAQ_BookQuest;

/**
 *
 */
UCLASS(ClassGroup = (AdvancedQuest), meta = (BlueprintSpawnableComponent))
class ADVANCEDQUEST_API UAQ_PlayerChannels : public UActorComponent
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

	/** Quest Channel */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Channels")
	UAQ_QuestChannel* questChannel;

	/* Book Quest Template */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Channels")
	TSubclassOf<UUserWidget> bookQuestWidget;

	/** Add Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void AddObserver(UObject* entity, EAQ_ObjectivesType eventType);

	/** Remove Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void RemoveObserver(UObject* entity, EAQ_ObjectivesType eventType);

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
