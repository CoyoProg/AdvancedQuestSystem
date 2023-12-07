// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayersChannels/AQ_Channels.h"
#include "AQ_QuestChannel.generated.h"

class UAQ_BookQuest;
class UWidgetComponent;
/**
 * 
 */
UCLASS()
class ADVANCEDQUEST_API UAQ_QuestChannel : public UAQ_Channels
{
	GENERATED_BODY()

public:
	UAQ_QuestChannel();
	~UAQ_QuestChannel();

	UAQ_BookQuest* GetWidget() { return bookQuest; }
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass, AActor* owner) { bookQuestWidgetClass = widgetClass; Owner = owner; }
	void AddWidgetToViewport();

	TSubclassOf<UUserWidget> bookQuestWidgetClass;
private:
	UAQ_BookQuest* bookQuest;

	AActor* Owner;
};
