// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestComponent.generated.h"

class UQuest;
class UQuestData;
class UWidgetComponent;
class UWidgetMarker;

UCLASS( ClassGroup=(Quest), meta=(BlueprintSpawnableComponent) )
class DEMOREELRPG_API UQuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQuestComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Widgets */
	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CreateWidget();

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void UpdateWidget();

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void HideWidget();

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void RemoveWidgets();

	/** Quest */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UQuestData* myData;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void SetQuestProperties(UQuest* quest);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void DisableQuest();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UWidgetComponent* Widgetcomponent;
	UWidgetMarker* QuestMarker;
};
