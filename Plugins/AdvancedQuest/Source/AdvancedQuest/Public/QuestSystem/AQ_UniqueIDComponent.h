#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AQ_UniqueIDComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADVANCEDQUEST_API UAQ_UniqueIDComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAQ_UniqueIDComponent();

	UFUNCTION(BlueprintCallable, Category = "Unique ID Component")
	void SetUniqueID(int InUniqueID) { UniqueID = InUniqueID; }

	UFUNCTION(BlueprintCallable, Category = "Unique ID Component")
	const int GetUniqueID() const { return UniqueID; }

	UFUNCTION(CallInEditor)
	void GenerateUniqueID();

private:
	UPROPERTY(VisibleAnywhere, Category = "Unique ID Component")
	int UniqueID = 0;
};
