// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "AQ_PlayerChannelsFacade.h"
#include "PlayersChannels/AQ_InteractionChannel.h"
#include "PlayersChannels/AQ_InventoryChannel.h"
#include "PlayersChannels/AQ_QuestChannel.h"

#include "Enums/AQ_ObjectivesType.h"

#include "AQ_PlayerChannels.generated.h"

/**
 *
 */
UCLASS(ClassGroup = (AdvancedQuest), meta = (BlueprintSpawnableComponent))
class ADVANCEDQUEST_API UAQ_PlayerChannels : public UActorComponent, public IAQ_PlayerChannelsFacade
{
	GENERATED_BODY()
	
public:
	UAQ_PlayerChannels();
	~UAQ_PlayerChannels();

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

	virtual void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState) override;
	virtual void OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay) override;
protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	bool IsNewGame = true;
};
