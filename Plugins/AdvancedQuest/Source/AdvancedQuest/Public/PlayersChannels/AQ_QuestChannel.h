// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"

#include "PlayersChannels/AQ_Channels.h"
#include "QuestSystem/AQ_BookQuest.h"
#include "QuestSystem/AQ_QuestComponent.h"
#include "Enums/AQ_RequiermentEventType.h"

#include "AQ_QuestChannel.generated.h"

class UWidgetComponent;
class IAQ_PlayerChannelsFacade;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestRequirementChangedDelegate, int, QuestID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelRequirementChangedDelegate, int, PlayerLevel);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestChannel : public UAQ_Channels
{
	GENERATED_BODY()

public:
	/* Widget */
	TSubclassOf<UUserWidget> bookQuestWidgetClass;
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass, AActor* owner) { bookQuestWidgetClass = widgetClass; Owner = owner; }
	void AddWidgetToViewport();

	/* Quests */
	void AddQuestToArchive(int questID);

	/* Events */
	void OnPlayerLevelChange(int newLevel);

	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestUpdate(UAQ_Quest* QuestUpdate);

	UFUNCTION()
	void OnQuestRequirementMet(UAQ_Quest* quest);

	/* References */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	UAQ_BookQuest* bookQuest = nullptr;

	FQuestRequirementChangedDelegate QuestRequirementChangedDelegate;
	FLevelRequirementChangedDelegate LevelRequirementChangedDelegate;
private:
	TArray<int> QuestIDArchive;
	AActor* Owner = nullptr;
};
