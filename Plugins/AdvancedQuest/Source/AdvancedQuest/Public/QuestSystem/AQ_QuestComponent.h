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

	/* Quest properties */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	TArray<UAQ_QuestData*> questsData;

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

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	bool IsQuestsEnabled{ false };
	UWidgetComponent* QuestMarkerWidget;

	void CreateQuestMarkerWidget();

	TArray<UAQ_Quest*> quests;
	void EnableQuest(UAQ_PlayerChannels* PlayerChannel);
	void DisableQuest(UAQ_PlayerChannels* PlayerChannel);

	void RemoveComponent();
};
