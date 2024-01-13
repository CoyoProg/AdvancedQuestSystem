#pragma once

#include "AQ_PlayerChannelsFacade.generated.h"

class UAQ_Quest;
enum class EAQ_QuestState : uint8;

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

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnQuestEnable(UAQ_Quest* quest);
};

