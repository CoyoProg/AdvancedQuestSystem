// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestManager.generated.h"

class UAQ_Quest;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewDayDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewWeekDelegate);


UCLASS(Blueprintable, meta = (ABSTRACT))
class ADVANCEDQUEST_API UAQ_QuestManager : public UActorComponent
{
	GENERATED_BODY()

	/* Constructor & Begin Play*/
public:	
	UAQ_QuestManager();

protected:
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;
	void LateBeginPlay();


	/* Quests */
public:
	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Quest")
	UAQ_Quest* QueryQuest(int QuestID);

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Advanced Quest | Quest")
	TMap<int, UAQ_Quest*> QuestDataCenter;


	/* Delegates */
	UPROPERTY(BlueprintCallable, Category = "Advanced Quest | Date")
	FOnNewDayDelegate OnNewDayDelegate;

	UPROPERTY(BlueprintCallable, Category = "Advanced Quest | Date")
	FOnNewWeekDelegate OnNewWeekDelegate;

	/* Load & Save */
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | Save-Load")
	void LoadQuestData();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | Save-Load")
	void SaveQuestData();
};
