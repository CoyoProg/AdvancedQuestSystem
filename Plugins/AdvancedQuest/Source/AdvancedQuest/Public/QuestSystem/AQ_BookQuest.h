// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AQ_BookQuest.generated.h"

class UAQ_Quest;
	
/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_BookQuest : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Book Quest Widget")
	UUserWidget* JournalWidget;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Book Quest Widget")
	UUserWidget* QuestGiverWidget;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Book Quest Widget")
	TArray<UAQ_Quest*> Quests;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void AddQuest(UAQ_Quest* quest);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void RemoveQuest(UAQ_Quest* quest);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateQuestBook(UAQ_Quest* quest);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void DisplayQuestGiverSummary(const TArray<UAQ_Quest*>& questsToDisplay);

	UFUNCTION(BlueprintCallable)
	void OpenJournal();

	UFUNCTION(BlueprintCallable)
	void OpenQuestGiverSummary();

	UFUNCTION(BlueprintCallable)
	void CloseAll();
};
