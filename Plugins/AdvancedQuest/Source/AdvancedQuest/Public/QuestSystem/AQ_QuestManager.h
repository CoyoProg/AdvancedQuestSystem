// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestManager.generated.h"

class UAQ_Quest;

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
	UFUNCTION(BlueprintCallable)
	UAQ_Quest* QueryQuest(int QuestID);

protected:
	UPROPERTY(BlueprintReadOnly)
	TMap<int, UAQ_Quest*> QuestDataCenter;


	/* Load & Save */
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void LoadQuestData();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SaveQuestData();
};
