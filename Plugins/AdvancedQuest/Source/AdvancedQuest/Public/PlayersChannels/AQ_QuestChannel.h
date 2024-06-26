// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Enums/AQ_RequiermentEventType.h"

#include "AQ_QuestChannel.generated.h"

class UAQ_Quest;
class UAQ_BookQuest;
class UAQ_QuestComponent;
class UAQ_QuestSounds;
class UWidgetComponent;
class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelRequirementChangedDelegate, int, PlayerLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialEventTriggerDelegate, UAQ_SpecialEventData*, SpecialEvent);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestChannel : public UObject
{
	GENERATED_BODY()

public:
	/* Widget */
	TSubclassOf<UUserWidget> QuestWidgetsClass;
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass) { QuestWidgetsClass = widgetClass;}
	void AddWidgetToViewport();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void SetQuestWidget(UAQ_BookQuest* InQuestWidget) { QuestWidgets = InQuestWidget; }

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Advanced Quest | UI")
	UAQ_BookQuest* QuestWidgets = nullptr;

	/* Events */
	void OnPlayerLevelChange(int newLevel);
	void OnSpecialEventTrigger(UAQ_SpecialEventData* specialEvent);

	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState);

	void PlayQuestEndSound(UAQ_Quest* InQuest);
	void PlayQuestStartSound(UAQ_Quest* InQuest);

	UFUNCTION()
	void OnQuestProgress(UAQ_Quest* QuestUpdate);

	UFUNCTION()
	void OnQuestRegression(UAQ_Quest* QuestUpdate);

	FLevelRequirementChangedDelegate LevelRequirementChangedDelegate;
	FSpecialEventTriggerDelegate SpecialEventTriggerDelegate;

	/* References */
	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Audio")
	UAQ_AudioChannel* AudioChannel = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Sounds | Quest")
	UAQ_QuestSounds* SoundBank = nullptr;
};
