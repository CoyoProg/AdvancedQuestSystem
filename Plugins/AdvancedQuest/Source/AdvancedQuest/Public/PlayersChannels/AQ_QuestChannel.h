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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestRequiermentChangedDelegate, int, QuestID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelRequiermentChangedDelegate, int, PlayerLevel);

/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestChannel : public UAQ_Channels
{
	GENERATED_BODY()

public:
	UAQ_QuestChannel() : bookQuest(nullptr), Owner(nullptr) {}
	~UAQ_QuestChannel() { bookQuest = nullptr; Owner = nullptr; }

	/* Book quest Widget */
	UAQ_BookQuest* GetWidget() { return bookQuest; }
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass, AActor* owner) { bookQuestWidgetClass = widgetClass; Owner = owner; }
	void AddWidgetToViewport();
	TSubclassOf<UUserWidget> bookQuestWidgetClass;

	/* Quests */
	void CreateAllQuests(IAQ_PlayerChannelsFacade* playerChannelListener);
	void GetAllQuestComponents(TArray<UAQ_QuestComponent*>& foundQuestComponentsP);
	void AddQuestToArchive(int questID);

	void OnPlayerLevelChange(int newLevel);

	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestUpdate(UAQ_Quest* QuestUpdate);

	FQuestRequiermentChangedDelegate QuestRequiermentChangedDelegate;
	FLevelRequiermentChangedDelegate LevelRequiermentChangedDelegate;
private:
	/* References */
	UAQ_BookQuest* bookQuest;
	TArray<int> QuestIDArchive;
	AActor* Owner;
};
