#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "AQ_PlayerChannelsFacade.h"
#include "Enums/AQ_ObjectivesType.h"

#include "AQ_PlayerChannels.generated.h"

class UAQ_InventoryChannel;
class UAQ_EnvironmentChannel;
class UAQ_CombatChannel;
class UAQ_QuestChannel;

/**
 *
 */
UCLASS(Blueprintable, meta = (ABSTRACT))
class ADVANCEDQUEST_API UAQ_PlayerChannels : public UActorComponent, public IAQ_PlayerChannelsFacade
{
	GENERATED_BODY()
	
public:
	UAQ_PlayerChannels();
	~UAQ_PlayerChannels();

	/** Player Channels */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Channels")
	UAQ_InventoryChannel* InventoryChannel = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Channels")
	UAQ_EnvironmentChannel* EnvironmentChannel = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Channels")
	UAQ_CombatChannel* CombatChannel = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Channels")
	UAQ_QuestChannel* QuestChannel = nullptr;


	/* Book Quest Template */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	TSubclassOf<UUserWidget> BookQuestWidget = nullptr;
	void InitBookQuestWidget();


	/* Observers Pattern */
	/** Add Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events|Observers")
	void AddObserver(UObject* entity, EAQ_ObjectivesType eventType);

	/** Remove Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events|Observers")
	void RemoveObserver(UObject* entity, EAQ_ObjectivesType eventType);


	/* Delegates */
	virtual void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState) override;
	virtual void OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay) override;

	UFUNCTION(BlueprintCallable, Category = "Events|Player")
	void OnPlayerLevelUp();

	void OnQuestCreated(UAQ_Quest* quest);

	UFUNCTION()
	void OnQuestEnable_Implementation(UAQ_Quest* quest);

	UFUNCTION()
	void OnEnvironmentEventNotify_Implementation(EAQ_EnvironmentEventType eventType, UObject* entity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Events|Quests")
	void OnQuestEnded(UAQ_Quest* quest);


	/* Controllers */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* OpenJournalAction = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* SaveQuestsAction;

	void SetPlayerInputComponent();

	/* Checkers for Quests */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Checkers|Quests")
	int CheckInventoryForItem(FAQ_Objectives currentObjective);	// This is implemented in blueprint 
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Checkers|Quests")
	int CheckForPlayerStats(FAQ_Objectives currentObjective);		// This is implemented in blueprint 


protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/* Player Stats */
	UPROPERTY(BlueprintReadOnly)
	int PlayerLevel = 1;


	/* Saving system */
	void SaveGame();

	// Those functions should be in the Inventory Component
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SaveInventory(); 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void LoadInventory();


	/* Observers of Player Channels */
private:
	void NotifyObservers(UObject* entity, enum class EAQ_NotifyEventType eventType, float amount = 1);
	TArray<UObject*> Observers;
};
