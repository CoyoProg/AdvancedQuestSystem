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
	void SetWidgetClass(TSubclassOf<UUserWidget> widgetClass) { bookQuestWidgetClass = widgetClass; }
	void AddWidgetToViewport(AActor* ownerP);

private:
	/* Quest Book Widget */
	UAQ_BookQuest* bookQuest;
	TSubclassOf<UUserWidget> bookQuestWidgetClass;
};
