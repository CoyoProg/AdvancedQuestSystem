// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interfaces/Observer.h"
#include "Enums/ObjectivesType.h"
#include "Player/PlayerChannels.h"
#include "BookQuest.h"
#include "Misc/Guid.h"
#include "Quest.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FObjectives
{
	GENERATED_BODY()

	/** Objectives specificities */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	EObjectivesType objectiveType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UClass* objectiveTarget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
	FString targetName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
	FString objectiveSummary;

	/** If the goal is a unique target*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool isUnique = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int uniqueObjectID = 0;

	/** If the goal is timed */
	//UPROPERTY(BlueprintReadOnly, Category = "Quest")
	//bool isTimed = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	//float timer = 0;

	//UPROPERTY(BlueprintReadOnly, Category = "Quest")
	//float CurrentTime = 0;

	/** Amount needed to reach to goal */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int amountNeeded = 1;

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	int CurrentAmount = 0;
};
	
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class DEMOREELRPG_API UQuest : public UObject, public IObserver
{
	GENERATED_BODY()
	
public:
	void AssignUniqueQuestID();

	/** Quest specificities */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString questTitle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
	int questID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FObjectives> objectives;

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	bool isAllObjectivesComplet = false;

	/** Rewards */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int xpReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	int goldReward;

	/** Inventory Reward */
	// To Do

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void EnableQuest(UPlayerChannels* playerChannels, UBookQuest* bookQuest, UObject* questGiver);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void DisableQuest();

	void OnNotify_Implementation(const UObject* entity, ENotifyEventType eventTypeP, int UniqueObjectID = 0);

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
