// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestComponent.generated.h"


UCLASS(Blueprintable, BlueprintType)
class ADVANCEDQUEST_API UAQ_QuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAQ_QuestComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateQuestMarker();

	UFUNCTION(BlueprintCallable)
	void RerunScript();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;	
};
