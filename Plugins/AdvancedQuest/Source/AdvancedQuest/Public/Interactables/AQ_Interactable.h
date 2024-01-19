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


	/* Delegates */
	UFUNCTION()
	void OnQuestStateChanged(class UAQ_Quest* quest, EAQ_QuestState questState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EnableParticles(bool isEnable);

	UPROPERTY(BlueprintReadWrite)
	bool bIsSleeping = false;


protected:
	virtual void BeginPlay() override;
	void LateBeginPlay();

	void SetQuestItem(int InQuestID);

	/* References */
private:
	class UAQ_QuestManager* QuestManager;


	/* Quest Item */
	UPROPERTY(EditAnywhere, Category = "Quest")
	bool bIsQuestActor = false;

	UPROPERTY(EditAnywhere, Category = "Quest")
	int QuestID = 0;
};
