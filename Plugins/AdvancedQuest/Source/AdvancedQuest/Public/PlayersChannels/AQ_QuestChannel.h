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

	void AddObserverRequierment(UObject* observerP, EAQ_RequiermentEventType requiermentType);
	void RemoveObserverRequierment(UObject* observerP, EAQ_RequiermentEventType requiermentType);
	void NotifyObservers(EAQ_RequiermentEventType requiermentType, FAQ_RequiermentData& questRequierments);

	UAQ_BookQuest* GetWidget() { return bookQuest; }
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass, AActor* owner) { bookQuestWidgetClass = widgetClass; Owner = owner; }
	void AddWidgetToViewport();

	void CreateAllQuests(IAQ_PlayerChannelsFacade* playerChannelListener);
	void GetAllQuestComponents(TArray<UAQ_QuestComponent*>& foundQuestComponentsP);
	void AddQuestToArchive(UAQ_Quest* questArchive);

	TSubclassOf<UUserWidget> bookQuestWidgetClass;

	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestUpdate(UAQ_Quest* QuestUpdate);
private:
	/* References */
	UAQ_BookQuest* bookQuest;
	TArray<UAQ_Quest*> QuestArchive;
	AActor* Owner;

	/* Observers */
	TArray<UObject*> ObserversLevelReq;
	TArray<UObject*> ObserversQuestReq;
};
