// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/Guid.h"

#include "ObserverPattern/AQ_Observer.h"
#include "QuestSystem/AQ_QuestData.h"

#include "AQ_Quest.generated.h"


/**
 *
 */
UENUM(BlueprintType)
enum class EAQ_QuestState : uint8
{
	Active				UMETA(DisplayName = "Active"),
	Pending				UMETA(DisplayName = "Pending"),
	Valid				UMETA(DisplayName = "Valid"),
	Archive				UMETA(DisplayName = "Archive")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestStateChangedDelegate, UAQ_Quest*, QuestUpdate, EAQ_QuestState, QuestState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectivesUpdatedDelegate, UAQ_Quest*, QuestUpdate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQuestRequiermentMetDelegate);

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
	EAQ_QuestState questState = EAQ_QuestState::Pending;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UAQ_QuestData* questData;

	/* Display Properties */
	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	bool isDisplayJournal = false;

	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	bool isDisplayQuickJournal = false;

	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	int indexQuickDisplay = 0;

	/* Requierments */
	UPROPERTY(BlueprintReadOnly, Category = "Quest Display")
	bool isRequiermentMet = true;

	/* Quest Functions */
	void SetQuestData(UAQ_QuestData* questData);
	void SetQuestReceiver(AActor* questReceiver);
	void SetQuestGiver(AActor* questGiver);

	UFUNCTION(BlueprintCallable)
	void EnableQuest();

	UFUNCTION(BlueprintCallable)
	void DisableQuest();

	UFUNCTION(BlueprintCallable)
	void ResetQuest();

	/* Event Listeners */
	void OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP);
	UFUNCTION()
	void OnQuestRequiermentChange(int questID);
	UFUNCTION()
	void OnLevelRequiermentChange(int playerLevel);

	AActor* GetQuestReceiver() const { return QuestReceiver; }
	AActor* GetQuestGiver() const { return QuestGiver; }

	FQuestStateChangedDelegate QuestStateChangedDelegate;
	FObjectivesUpdatedDelegate ObjectivesUpdatedDelegate;
	FQuestRequiermentMetDelegate QuestRequiermentMetDelegate;

private:
	/** Quest owner */
	AActor* QuestGiver;
	AActor* QuestReceiver;

	/* Objectives */
	int objectivesCompleted = 0;
	bool IsSameObject(int objectiveIndexP,UObject* entityP);
	bool IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP);

	/* Requuierments */
	void CheckIfRequiermentsMet();
};
