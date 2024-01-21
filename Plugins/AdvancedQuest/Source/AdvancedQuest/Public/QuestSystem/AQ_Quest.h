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
	Archive				UMETA(DisplayName = "Archive"),

	Failed				UMETA(DisplayName = "Failed"),
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestStateChangedDelegate, UAQ_Quest*, QuestUpdate, EAQ_QuestState, QuestState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectivesUpdatedDelegate, UAQ_Quest*, QuestUpdate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestRequirementMetDelegate, UAQ_Quest*, QuestUpdate);

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

	/* Quest Data */
	UPROPERTY(BlueprintReadWrite, Category = "Quest")
	EAQ_QuestState QuestState = EAQ_QuestState::Pending;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UAQ_QuestData* QuestData = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Quest")
	int ObjectivesCompleted = 0;

	UFUNCTION(BlueprintCallable)
	void EnableQuest();

	UFUNCTION(BlueprintCallable)
	void DisableQuest();

	UFUNCTION(BlueprintCallable)
	void ResetQuest();

	UFUNCTION(BlueprintCallable)
	void QuestFailed();

	void SetQuestData(UAQ_QuestData* QuestData);
	void UpdateQuestState();

	/* Display Properties */
	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	bool bIsDisplayJournal = false;

	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	bool bIsDisplayQuickJournal = false;

	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	int IndexQuickDisplay = 0;


	/* Requirements */
	UPROPERTY(BlueprintReadWrite, Category = "Quest Display")
	bool bIsRequirementMet = true;


	/* Event Listeners */
	void OnNotify_Implementation(UObject* entity, EAQ_NotifyEventType eventTypeP, float amount = 1);
	void UpdateCurrentObjective(int i, float amount = 1);

	UFUNCTION()
	void OnQuestRequirementChange(int QuestID);
	UFUNCTION()
	void OnLevelRequirementChange(int PlayerLevel);

	/* Delegates */
	FQuestStateChangedDelegate QuestStateChangedDelegate;
	FObjectivesUpdatedDelegate ObjectivesUpdatedDelegate;
	FQuestRequirementMetDelegate QuestRequirementMetDelegate;


private:
	/* Objectives */
	bool IsSameObject(int objectiveIndexP,UObject* entityP);
	bool IsSameItem(int objectiveIndexP, UObject* entityP);
	bool IsSameEventType(int objectiveIndexP, EAQ_NotifyEventType eventTypeP);

	/* Requirements */
	void CheckIfRequiermentsMet();
};
