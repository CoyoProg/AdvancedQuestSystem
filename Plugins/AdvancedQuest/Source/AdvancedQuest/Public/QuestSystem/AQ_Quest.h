// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/Guid.h"

#include "ObserverPattern/AQ_Observer.h"
#include "PlayersChannels/AQ_PlayerChannels.h"
#include "AQ_BookQuest.h"
#include "AQ_QuestData.h"

#include "AQ_Quest.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_Quest : public UObject, public IAQ_Observer
{
	GENERATED_BODY()
	
public:
	UAQ_Quest();

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	bool isAllObjectivesComplet = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UAQ_QuestData* myData;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void EnableQuest(UAQ_PlayerChannels* playerChannels, UAQ_BookQuest* bookQuest, UObject* questGiver);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void DisableQuest();

	void OnNotify_Implementation(const UObject* entity, EAQ_NotifyEventType eventTypeP, int UniqueObjectID = 0);

	void UpdateQuestComponent();

private:
	/** Player owner */
	UAQ_PlayerChannels* PlayerChannels;
	UAQ_BookQuest* BookQuest;
	UObject* QuestGiver;

	int objectivesCompleted = 0;

	bool IsSameObject(int objectiveIndexP, const UObject* entityP, int uniqueObjectIdP);
	bool IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP);

	void AddMyObservers();
	void RemoveMyObservers();
};
