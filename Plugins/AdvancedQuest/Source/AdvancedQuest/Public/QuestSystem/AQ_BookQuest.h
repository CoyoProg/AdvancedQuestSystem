// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AQ_BookQuest.generated.h"

class UAQ_Quest;
class IAQ_PlayerChannelsFacade;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestEnableDelegate, UAQ_Quest*, InQuest);

/**
 *
 */
UCLASS(Blueprintable, meta = (ABSTRACT))
class ADVANCEDQUEST_API UAQ_BookQuest : public UUserWidget
{
	GENERATED_BODY()
	
public:
	/* Widgets */
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Advanced Quest | UI")
	UUserWidget* QuestLogWidget = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Advanced Quest | UI")
	UUserWidget* QuestGiverWidget = nullptr;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | UI")
	void UpdateQuestWidgets(UAQ_Quest* quest);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | UI")
	void DisplayQuestGiverSummary(const TArray<UAQ_Quest*>& questsToDisplay);
	
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | UI")
	void OpenQuestLog();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | UI")
	void OpenQuestGiverSummary();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | UI")
	void CloseAll();


	/* Quests */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Advanced Quest | UI")
	TArray<UAQ_Quest*> Quests;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | UI")
	void AddQuest(UAQ_Quest* quest);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | UI")
	void RemoveQuest(UAQ_Quest* quest);


	/* References */
	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | UI")
	APlayerController* PlayerController = nullptr;


	/* Load Save */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | Save-Load")
	void OnLoadQuests(UAQ_Quest* quest);


	/* Delegates */
	UPROPERTY(BlueprintAssignable, Category = "Advanced Quest | Events")
	FOnQuestEnableDelegate OnQuestEnableDelegate;

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void OnQuestEnableBroadcast(UAQ_Quest* quest);
};
