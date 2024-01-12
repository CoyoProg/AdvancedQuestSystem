// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "AQ_QuestComponent.generated.h"

class UAQ_QuestData;
class UWidgetComponent;
class UAQ_QuestManager;
class IAQ_PlayerChannelsFacade;

USTRUCT(Blueprintable, BlueprintType)
struct FAQ_IsGiverOrReceiver
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	bool bIsQuestReceiver = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	bool bIsQuestGiver = true;
};


UCLASS(Blueprintable, meta = (ABSTRACT))
class ADVANCEDQUEST_API UAQ_QuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestComponent();
	~UAQ_QuestComponent();

protected:
	virtual void BeginPlay() override;

public:
	/* Quests */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	TMap<int, FAQ_IsGiverOrReceiver> QuestsList;

	UFUNCTION()
	void OnQuestStateChanged(UAQ_Quest* questUpdate, EAQ_QuestState QuestState);

	UFUNCTION()
	void OnQuestRequirementMet(UAQ_Quest* quest);

	void BindFunctionsToQuestDelegates();


	/* Interaction */
	UFUNCTION(BlueprintCallable)
	void Interact(const TScriptInterface<IAQ_PlayerChannelsFacade>& PlayerChannel);


	/* Widgets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Component")
	TSubclassOf<UUserWidget> QuestMarkerClass = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Quest Component")
	UMaterialInterface* QuestMarkerMaterial = nullptr; // Put a two sided material for the widget to be two sided

	UFUNCTION(BlueprintCallable)
	void SetQuestMarker(bool isMarkerVisible, bool isQuestValid);

	UFUNCTION(BlueprintCallable)
	void UpdateQuestMarker();

private:
	UWidgetComponent* QuestMarkerWidget = nullptr;
	void CreateQuestMarkerWidget();


	/* DEBUG */
	UFUNCTION(BlueprintCallable)
	void RerunScript(); // Usefull only to see all the quest Marker when using the Tool


	/* References */
private:
	AActor* Owner = nullptr ;
	UAQ_QuestManager* QuestManager = nullptr;
};
