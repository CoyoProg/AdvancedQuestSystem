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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UAQ_QuestData* myData;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void EnableQuest(UAQ_PlayerChannels* playerChannels, UObject* questGiver);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void DisableQuest();

	void OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP);

	void UpdateQuestComponent();

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void EndPlay();
private:
	/** Player owner */
	UAQ_PlayerChannels* PlayerChannels;
	UAQ_BookQuest* BookQuest;
	UObject* QuestGiver;

	int objectivesCompleted = 0;
	bool IsEnable = false;

	bool IsSameObject(int objectiveIndexP,UObject* entityP);
	bool IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP);

	void AddMyObservers();
	void RemoveMyObservers();
};
