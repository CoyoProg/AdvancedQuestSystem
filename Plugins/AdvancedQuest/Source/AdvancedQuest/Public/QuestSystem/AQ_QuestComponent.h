// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestData.h"
#include "AQ_QuestComponent.generated.h"

class UWidgetComponent;
class UUserWidget;
class UAQ_QuestManager;
class IAQ_PlayerChannelsFacade;
class APlayerCameraManager;
class UMaterialInterface;

USTRUCT(Blueprintable, BlueprintType)
struct FAQ_IsGiverOrReceiver
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Component")
	bool bIsQuestReceiver = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Component")
	bool bIsQuestGiver = true;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChangedBueprintDelegate, EAQ_QuestState, QuestState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSleepStateChangedBueprintDelegate, bool, bIsComponentSilent);

UCLASS(Blueprintable, meta = (ABSTRACT))
class ADVANCEDQUEST_API UAQ_QuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestComponent();
	~UAQ_QuestComponent();

protected:
	virtual void BeginPlay() override;
	void LateBeginPlay();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	/* Quests */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Component")
	TMap<int, FAQ_IsGiverOrReceiver> QuestsList;

	UFUNCTION(Category = "Advanced Quest | Events")
	void OnQuestStateChangedWrapper(UAQ_Quest* questUpdate, EAQ_QuestState QuestState);

	UFUNCTION(Category = "Advanced Quest | Events")
	void OnQuestRequirementMet(UAQ_Quest* quest);

	void BindFunctionsToQuestDelegates();


	/* Interaction */
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Component")
	void Interact(const TScriptInterface<IAQ_PlayerChannelsFacade>& PlayerChannel);

	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Component")
	bool bIsComponentSilent = true;

	// Should the Quest Component be triggered before any other interaction
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Advanced Quest | Component")
	bool bHasPriority = true;

	/* Widgets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | UI")
	TSubclassOf<UUserWidget> QuestMarkerClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | UI")
	UMaterialInterface* QuestMarkerMaterial = nullptr; // Put a two sided material for the widget to be two sided

	// You can adjust this value if the quest Marker looks too low or to high of the actor
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Advanced Quest | UI")
	float zOffset = 0;

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | UI")
	void SetQuestMarker(bool isMarkerVisible, bool isQuestValid, EAQ_QuestType QuestState = EAQ_QuestType::MainQuest);

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | UI")
	void UpdateQuestMarker();

	void CheckQuestTypes(TArray<UAQ_Quest*>& ValidQuests, EAQ_QuestType& currentType);


	/* References */
protected:
	AActor* Owner = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Component")
	UAQ_QuestManager* QuestManager = nullptr;


	/* Floating movement */
	float CurrentDelta = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Floating Movement")
	float FloatingSpeed = 2.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Floating Movement")
	float FloatingAmplitude = .05f;


	// Use this delegate to be able to update actors in blueprint
	// when OnQuestStateChanged is triggered
	UPROPERTY(BlueprintAssignable, Category = "Advanced Quest | Events")
	FOnStateChangedBueprintDelegate OnQuestStateChanged;

	UPROPERTY(BlueprintAssignable, Category = "Advanced Quest | Events")
	FOnSleepStateChangedBueprintDelegate OnSleepStateChanged;

private:
	UWidgetComponent* QuestMarkerWidget = nullptr;
	void CreateQuestMarkerWidget();
	void MarkerFloatingMovement(float DeltaTime);

	/* References */
	APlayerCameraManager* cameraManager = nullptr;

	/* DEBUG */
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Debug")
	void RerunScript(); // Usefull only to see all the quest Marker when using the Tool
};
