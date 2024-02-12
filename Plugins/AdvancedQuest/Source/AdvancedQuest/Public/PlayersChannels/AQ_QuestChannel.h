// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Enums/AQ_RequiermentEventType.h"

#include "AQ_QuestChannel.generated.h"

class UAQ_Quest;
class UAQ_BookQuest;
class UAQ_QuestComponent;
class IAQ_PlayerChannelsFacade;
class UWidgetComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelRequirementChangedDelegate, int, PlayerLevel);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestChannel : public UObject
{
	GENERATED_BODY()

public:
	/* Widget */
	TSubclassOf<UUserWidget> BookQuestWidgetClass;
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass) { BookQuestWidgetClass = widgetClass;}
	void AddWidgetToViewport();

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Advanced Quest | UI")
	UAQ_BookQuest* BookQuest = nullptr;

	/* Events */
	void OnPlayerLevelChange(int newLevel);

	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestUpdate(UAQ_Quest* QuestUpdate);

	FLevelRequirementChangedDelegate LevelRequirementChangedDelegate;
};
