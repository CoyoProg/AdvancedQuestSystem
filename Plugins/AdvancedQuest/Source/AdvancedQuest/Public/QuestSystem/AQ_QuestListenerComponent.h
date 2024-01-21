#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_QuestListenerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestStateChangedListenerDelegate, UAQ_Quest*, questUpdate, EAQ_QuestState, QuestState);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDQUEST_API UAQ_QuestListenerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAQ_QuestListenerComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

	/* References */
	UPROPERTY(BlueprintReadOnly)
	class UAQ_QuestManager* QuestManager = nullptr;

	UFUNCTION()
	void OnQuestStateChangedWrapper(class UAQ_Quest* questUpdate, EAQ_QuestState QuestState);

	// Use this delegate to be able to update actors in blueprint
	// when OnQuestStateChanged is triggered
	UPROPERTY(BlueprintAssignable)
	FOnQuestStateChangedListenerDelegate OnQuestStateChanged;

	UFUNCTION(BlueprintCallable)
	void BindFunctionsToQuestDelegates(class UAQ_Quest* quest);
};
