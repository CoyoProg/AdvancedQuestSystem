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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* NiagaraComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USceneComponent* SceneRoot = nullptr;

	UPROPERTY(BlueprintReadWrite)
	bool bIsSleeping = false;

	UFUNCTION(BlueprintCallable)
	void EnableParticles(bool isEnable);


	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(class UAQ_Quest* quest, EAQ_QuestState questState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Initial State")
	void ResetToInitialState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Initial State")
	void SaveInitialState();

	UPROPERTY(BlueprintReadWrite, Category = "Initial State")
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
