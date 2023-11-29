// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestComponent.generated.h"

class UAQ_Quest;
class UAQ_QuestData;
class UAQ_PlayerChannels;
class UWidgetComponent;

UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_QuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestComponent();
	~UAQ_QuestComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/* Quest properties */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	UAQ_QuestData* questData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	TSubclassOf<UUserWidget> questMarkerClass;

	/* Put a two sided material for the widget to be two sided */
	UPROPERTY(BlueprintReadWrite, Category = "Quest Component")
	UMaterialInterface* material;

	UFUNCTION(BlueprintCallable)
	void UpdateQuestMarker();

	UFUNCTION(BlueprintCallable)
	void RerunScript();

	UFUNCTION(BlueprintCallable)
	void Interact(UAQ_PlayerChannels* PlayerChannel);

	/* TEMPORARY DEBUG*/
	UPROPERTY(BlueprintReadOnly, Category = "Quest Component")
	UAQ_Quest* quest;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	bool IsQuestEnable{ false };
	UWidgetComponent* WidgetComponent;

	void SetQuestData();
	void CreateQuestMarkerWidget();

	void EnableQuest(UAQ_PlayerChannels* PlayerChannel);
	void DisableQuest(UAQ_PlayerChannels* PlayerChannel);
};
