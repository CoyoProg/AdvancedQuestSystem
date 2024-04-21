// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "AQ_PlayerChannelsFacade.h"
#include "Enums/AQ_ObjectivesType.h"
#include "QuestSystem/AQ_QuestData.h"

#include "AQ_PlayerChannels.generated.h"

class UAQ_InventoryChannel;
class UAQ_EnvironmentChannel;
class UAQ_CombatChannel;
class UAQ_QuestChannel;
class UAQ_QuestManager;
class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerEventDelegate, UObject*, entity, EAQ_NotifyEventType, eventType, float, amount);

/**
 *
 */
UCLASS(Blueprintable, meta = (ABSTRACT))
class ADVANCEDQUEST_API UAQ_PlayerChannels : public UActorComponent, public IAQ_PlayerChannelsFacade
{
	GENERATED_BODY()
	
public:
	UAQ_PlayerChannels();
	~UAQ_PlayerChannels();

	/* Book Quest Template */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | UI")
	TSubclassOf<UUserWidget> QuestWidgetsClass = nullptr;
	void InitQuestWidgets();


	/* Observers Pattern */
	/** Add Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void AddObserver(UAQ_Quest* entity, EAQ_ObjectivesType eventType);

	/** Remove Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void RemoveObserver(UAQ_Quest* entity, EAQ_ObjectivesType eventType);


	/* Delegates */
	virtual void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState) override;
	virtual void OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay) override;
	FOnPlayerEventDelegate OnPlayerEventDelegate;

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnPlayerLevelUp();

	void OnQuestCreated(UAQ_Quest* quest);

	UFUNCTION(Category = "Advanced Quest | Events")
	void OnQuestEnable_Implementation(UAQ_Quest* quest);

	UFUNCTION(Category = "Advanced Quest | Events")
	void OnEnvironmentEventNotify_Implementation(EAQ_EnvironmentEventType eventType, UObject* entity);
	UFUNCTION(Category = "Advanced Quest | Events")
	void OnCombatEventNotify_Implementation(EAQ_CombatEventType eventType, UObject* entity, float amount = 1);
	UFUNCTION(Category = "Advanced Quest | Events")
	void OnSpecialEventNotify_Implementation(UAQ_SpecialEventData* specialEvent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Events")
	void OnQuestEnded(UAQ_Quest* quest);


	/* Controllers */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Inputs", meta = (AllowPrivateAccess = "true"))
	class UInputAction* OpenJournalAction = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Inputs", meta = (AllowPrivateAccess = "true"))
	class UInputAction* SaveQuestsAction = nullptr;

	void SetPlayerInputComponent();

	/* Checkers for Quests */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Quest")
	int CheckInventoryForItem(FAQ_Objectives currentObjective);	// This is implemented in blueprint 
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Quest")
	int CheckForPlayerStats(FAQ_Objectives currentObjective);	// This is implemented in blueprint 


protected:
	virtual void BeginPlay() override;

	/** Player Channels */
	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Channels")
	UAQ_InventoryChannel* InventoryChannel = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Channels")
	UAQ_EnvironmentChannel* EnvironmentChannel = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Channels")
	UAQ_CombatChannel* CombatChannel = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Channels")
	UAQ_QuestChannel* QuestChannel = nullptr;


	/* Player Stats */
	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Player")
	int PlayerLevel = 1;


	/* Saving system */
	void SaveGame();


	// Those functions should be in the Inventory Component
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | Save-Load")
	void SaveInventory(); 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | Save-Load")
	void LoadInventory();

private:
	UAQ_QuestManager* QuestManager;
};
