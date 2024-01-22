// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactables/AQ_IInteractable.h"
#include "AQ_Interactable.generated.h"

UCLASS()
class ADVANCEDQUEST_API AAQ_Interactable : public AActor, public IAQ_IInteractable
{
	GENERATED_BODY()
	
public:	
	AAQ_Interactable();
	virtual void Tick(float DeltaTime) override;

	/* Components */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Interactable")
	class UNiagaraComponent* NiagaraComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Interactable")
	class UStaticMeshComponent* StaticMesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Advanced Quest | Interactable")
	class USceneComponent* SceneRoot = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | Interactable")
	bool bIsSleeping = false;

	UFUNCTION(BlueprintCallable, Category = "Advanced Quest | Interactable")
	void EnableParticles(bool isEnable);


	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(class UAQ_Quest* quest, EAQ_QuestState questState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Interactable | Reset")
	void ResetToInitialState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Advanced Quest | Interactable| Reset")
	void SaveInitialState();

	UPROPERTY(BlueprintReadWrite, Category = "Advanced Quest | Interactable | Reset")
	bool bIsInitialStateSaved = false;



protected:
	virtual void BeginPlay() override;
	void LateBeginPlay();


	/* Quest Item */
	void SetQuestItem(int InQuestID);
private:
	UPROPERTY(EditAnywhere, Category = "Quest")
	bool bIsQuestActor = false;

	UPROPERTY(EditAnywhere, Category = "Quest", meta = (EditCondition = "bIsQuestActor == true", EditConditionHides))
	int QuestID = 0;


	/* References */
	class UAQ_QuestManager* QuestManager;
};
