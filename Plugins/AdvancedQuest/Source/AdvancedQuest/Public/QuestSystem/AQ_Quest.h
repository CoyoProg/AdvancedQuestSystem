// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/Guid.h"

#include "ObserverPattern/AQ_Observer.h"

#include "AQ_Quest.generated.h"

class UAQ_BookQuest;
class UAQ_QuestData;
class UAQ_PlayerChannel;

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_Quest : public UObject, public IAQ_Observer
{
	GENERATED_BODY()
	
public:
	UAQ_Quest();
	~UAQ_Quest();

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	bool isAllObjectivesComplet = false;

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	bool IsEnable = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UAQ_QuestData* questData;

	/* Display Properties */
	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	bool isDisplayJournal = false;

	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	bool isDisplayQuickJournal = false;

	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	int indexQuickDisplay = 0;

	/* Quest Functions */
	void SetQuestData(UAQ_QuestData* questData);

	UFUNCTION(BlueprintCallable)
	void EnableQuest(UAQ_PlayerChannels* playerChannels, UAQ_QuestComponent* questGiver);

	UFUNCTION(BlueprintCallable)
	void DisableQuest();

	void OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP);

	void UpdateQuestComponent();
	void EndPlay();

private:
	/** Quest owner */
	UAQ_PlayerChannels* PlayerChannels;
	UAQ_BookQuest* BookQuest;
	UAQ_QuestComponent* QuestGiverComponent;

	int objectivesCompleted = 0;

	bool IsSameObject(int objectiveIndexP,UObject* entityP);
	bool IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP);

	void AddMyObservers();
	void RemoveMyObservers();
};
