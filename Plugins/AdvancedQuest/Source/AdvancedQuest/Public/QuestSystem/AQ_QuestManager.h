// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestManager.generated.h"

class UAQ_Quest;

UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_QuestManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestManager();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite)
	TMap<int, UAQ_Quest*> QuestDataCenter;

	UFUNCTION(BlueprintCallable)
	UAQ_Quest* QueryQuest(int QuestID) { return QuestDataCenter[QuestID]; }

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void LoadQuestData();

protected:
	// Called before BeginPlay
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;

private:
	TArray<FAssetData> QuestDataAssets;
};
