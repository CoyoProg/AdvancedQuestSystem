// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "AQ_PlayerChannelsFacade.generated.h"

class UAQ_Quest;
class UAQ_ItemData;
enum class EAQ_QuestState : uint8;
enum class EAQ_EnvironmentEventType : uint8;
enum class EAQ_CombatEventType : uint8;

/**
 * 
 */
UINTERFACE(Blueprintable)
class ADVANCEDQUEST_API UAQ_PlayerChannelsFacade : public UInterface
{
	GENERATED_BODY()
};

class ADVANCEDQUEST_API IAQ_PlayerChannelsFacade
{
	GENERATED_BODY()

public:
	UFUNCTION()
	virtual void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState) {}

	virtual void OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay) {}


	/* Events */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Advanced Quest | Events")
	void OnQuestEnable(UAQ_Quest* quest);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Advanced Quest | Events")
	void OnEnvironmentEventNotify(EAQ_EnvironmentEventType eventType, UObject* entity);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Advanced Quest | Events")
	void OnCombatEventNotify(EAQ_CombatEventType eventType, UObject* entity, float amount = 1);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Advanced Quest | Events")
	void OnSpecialEventNotify(int questID, int eventID);


	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Inventory")
	void AddItemToInvetory(UAQ_ItemData* item, int amount);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Inventory")
	void RemoveItemFromInvetory(UAQ_ItemData* item, int amount, bool bRemoveCompletely = false);
};

