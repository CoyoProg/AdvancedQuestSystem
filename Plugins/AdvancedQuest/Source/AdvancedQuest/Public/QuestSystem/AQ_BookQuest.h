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
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Book Quest Widget")
	UUserWidget* JournalWidget = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Book Quest Widget")
	UUserWidget* QuestGiverWidget = nullptr;

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


	/* Quests */
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Book Quest Widget")
	TArray<UAQ_Quest*> Quests;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void AddQuest(UAQ_Quest* quest);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void RemoveQuest(UAQ_Quest* quest);


	/* References */
	UPROPERTY(BlueprintReadOnly)
	APlayerController* PlayerController = nullptr;


	/* Load Save */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnLoadQuests(UAQ_Quest* quest);


	/* Delegates */
	UPROPERTY(BlueprintAssignable)
	FOnQuestEnableDelegate OnQuestEnableDelegate;

	UFUNCTION(BlueprintCallable)
	void OnQuestEnableBroadcast(UAQ_Quest* quest);
};
