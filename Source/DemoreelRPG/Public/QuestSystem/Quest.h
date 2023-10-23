// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/Observer.h"
#include "Player/PlayerChannels.h"
#include "BookQuest.h"
#include "QuestData.h"
#include "Misc/Guid.h"
#include "Quest.generated.h"
	
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DEMOREELRPG_API UQuest : public UObject, public IObserver
{
	GENERATED_BODY()
	
public:
	UQuest();

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	bool isAllObjectivesComplet = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UQuestData* myData;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void EnableQuest(UPlayerChannels* playerChannels, UBookQuest* bookQuest, UObject* questGiver);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void DisableQuest();

	void OnNotify_Implementation(const UObject* entity, ENotifyEventType eventTypeP, int UniqueObjectID = 0);

	void UpdateQuestComponent();

private:
	/** Player owner */
	UPlayerChannels* playerChannels;
	UBookQuest* BookQuest;
	UObject* QuestGiver;

	int objectivesCompleted = 0;

	bool IsSameObject(int objectiveIndexP, const UObject* entityP, int uniqueObjectIdP);
	bool IsSameEventType(int objectiveIndexP, ENotifyEventType eventTypeP);

	void AddMyObservers();
	void RemoveMyObservers();
};
