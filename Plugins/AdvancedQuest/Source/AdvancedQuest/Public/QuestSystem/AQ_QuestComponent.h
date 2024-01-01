// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "QuestSystem/AQ_Quest.h"
#include "AQ_QuestComponent.generated.h"

class UAQ_QuestData;
class UWidgetComponent;
class IAQ_PlayerChannelsFacade;

UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_QuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestComponent();
	~UAQ_QuestComponent();

	/* Quest properties */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	TMap<UAQ_QuestData*, AActor*> quests_DataReceiver;

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
	void RerunScript();

	UFUNCTION(BlueprintCallable)
	void Interact(UAQ_PlayerChannels* PlayerChannel);

	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* questUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestRequirementMet(UAQ_Quest* quest);

	void RemoveQuestFromArray(UAQ_Quest* questToRemove);

	void CreateQuests();

protected:
	virtual void BeginPlay() override;

	TArray<UAQ_Quest*> quests;

private:
	UWidgetComponent* QuestMarkerWidget;
	AActor* Owner;

	void CreateQuestMarkerWidget();
	void RemoveComponent();
};
