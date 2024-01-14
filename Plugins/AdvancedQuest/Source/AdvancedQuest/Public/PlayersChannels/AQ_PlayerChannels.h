#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "AQ_PlayerChannelsFacade.h"
#include "Enums/AQ_ObjectivesType.h"

#include "AQ_PlayerChannels.generated.h"

class UAQ_InteractionChannel;
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
	UAQ_InteractionChannel* InteractionChannel = nullptr;

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
	UFUNCTION(BlueprintCallable, Category = "Events")
	void AddObserver(UObject* entity, EAQ_ObjectivesType eventType);

	/** Remove Observer to the corresponding channel */
	UFUNCTION(BlueprintCallable, Category = "Events")
	void RemoveObserver(UObject* entity, EAQ_ObjectivesType eventType);


	/* Delegates */
	virtual void OnQuestStateChanged(UAQ_Quest* QuestUpdate, EAQ_QuestState QuestState) override;
	virtual void OnInteractQuestGiver(TArray<UAQ_Quest*> questsToDisplay) override;

	UFUNCTION(BlueprintCallable, Category = "Events|Player")
	void OnPlayerLevelUp(int PlayerLevel);

	void OnQuestCreated(UAQ_Quest* quest);

	UFUNCTION()
	void OnQuestEnable_Implementation(UAQ_Quest* quest);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Events|Quests")
	void OnQuestEnded(UAQ_Quest* quest);


	/* Controllers */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* OpenJournalAction;

	void SetPlayerInputComponent();


protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
