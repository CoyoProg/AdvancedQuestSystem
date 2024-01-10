// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "QuestSystem/AQ_Quest.h"
#include "AQ_QuestComponent.generated.h"

class UAQ_QuestData;
class UWidgetComponent;
class UAQ_QuestManager;
class IAQ_PlayerChannelsFacade;

USTRUCT(Blueprintable, meta = (ABSTRACT))
struct FAQ_IsGiverOrReceiver
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	bool isQuestReceiver = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	bool isQuestGiver = true;
};


UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_QuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestComponent();
	~UAQ_QuestComponent();

	/* Quest properties */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	TMap<int, FAQ_IsGiverOrReceiver> quests_Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	TSubclassOf<UUserWidget> questMarkerClass;

	/* Put a two sided material for the widget to be two sided */
	UPROPERTY(BlueprintReadWrite, Category = "Quest Component")
	UMaterialInterface* material;

	UFUNCTION(BlueprintCallable)
	void SetQuestMarker(bool isMarkerVisible, bool isQuestValid);
	
	UFUNCTION(BlueprintCallable)
	void UpdateQuestMarker();

	UFUNCTION(BlueprintCallable)
	void RerunScript(); // Usefull only to see all the quest Marker when using the Tool

	UFUNCTION(BlueprintCallable)
	void Interact(const TScriptInterface<IAQ_PlayerChannelsFacade>& PlayerChannel);

	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* questUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestRequirementMet(UAQ_Quest* quest);

	void BindFunctionsToQuestDelegates();

protected:
	virtual void BeginPlay() override;

private:
	UWidgetComponent* QuestMarkerWidget;
	AActor* Owner;

	void CreateQuestMarkerWidget();

	UAQ_QuestManager* QuestManager;
};
