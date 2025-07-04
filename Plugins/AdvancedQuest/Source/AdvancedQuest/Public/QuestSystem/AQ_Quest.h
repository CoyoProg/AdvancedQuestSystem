// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/Guid.h"

#include "QuestSystem/AQ_QuestData.h"
#include "AQ_Quest.generated.h"


UENUM(BlueprintType)
enum class EAQ_QuestState : uint8
{
	Active				UMETA(DisplayName = "Active"),
	Pending				UMETA(DisplayName = "Pending"),
	Valid				UMETA(DisplayName = "Valid"),
	Archive				UMETA(DisplayName = "Archive"),

	Failed				UMETA(DisplayName = "Failed"),
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestStateChangedDelegate, UAQ_Quest*, QuestUpdate, EAQ_QuestState, QuestState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPositiveObjectiveUpdateDelegate, UAQ_Quest*, QuestUpdate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNegativeObjectiveUpdateDelegate, UAQ_Quest*, QuestUpdate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestRequirementMetDelegate, UAQ_Quest*, QuestUpdate);

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_Quest : public UObject
{
	GENERATED_BODY()
	
public:
	UAQ_Quest();
	~UAQ_Quest();

	/* Quest Data */
	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | Quest")
	EAQ_QuestState QuestState = EAQ_QuestState::Pending;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Quest")
	UAQ_QuestData* QuestData = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | Quest")
	bool AllObjectivesCompleted = false;

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void EnableQuest();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void DisableQuest();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void ResetQuest();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void ResetObjectives();

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Events")
	void QuestFailed();

	void SetQuestData(UAQ_QuestData* QuestData);
	void UpdateQuestState();

	/* Display Properties */
	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | UI")
	bool bIsDisplayQuestLog = false;

	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | UI")
	bool bIsDisplayQuestTracker = false;

	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | UI")
	int IndexQuestTracker = 0;


	/* Requirements */
	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | Quest")
	bool bIsRequirementMet = true;


	/* Event Listeners */
	UFUNCTION()
	void OnNotify(UObject* entity, EAQ_NotifyEventType eventTypeP, float amount = 1);
	void CheckQuestCompletion(int objectivesCount, bool& retFlag);
	UFUNCTION()
	void OnQuestCompletionNotify(UAQ_Quest* Quest);

	void UpdateCurrentObjective(int i, float amount = 1);

	UFUNCTION()
	void OnQuestRequirementChange(UAQ_Quest* questUpdateP, EAQ_QuestState questStateP);
	UFUNCTION()
	void OnEventRequirementChange(UAQ_SpecialEventData* specialEvent);
	UFUNCTION()
	void OnLevelRequirementChange(int PlayerLevel);
	UFUNCTION()
	void OnNewDay();

	/* Delegates */
	FQuestStateChangedDelegate QuestStateChangedDelegate;
	FPositiveObjectiveUpdateDelegate PositiveObjectiveUpdateDelegate;
	FNegativeObjectiveUpdateDelegate NegativeObjectiveUpdateDelegate;
	FQuestRequirementMetDelegate QuestRequirementMetDelegate;


private:
	/* Objectives */
	bool IsSameObject(int objectiveIndexP,UObject* entityP);
	bool IsSameItem(int objectiveIndexP, UObject* entityP);
	bool IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP);

	/* Requirements */
	void CheckIfRequirementsMet();
};
