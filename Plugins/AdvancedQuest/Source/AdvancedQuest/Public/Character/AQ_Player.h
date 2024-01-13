#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AQ_Player.generated.h"

/**
	IMPORTANT: This class is not meant to be used in your projects, this is just
	an example to showcase how to use the plugin.
	Everything in here will be less well-thaught-out and Optimized.
	It's just a very quick implementation of a very basic Player.
 */
UCLASS(Blueprintable)
class ADVANCEDQUEST_API AAQ_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAQ_Player();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
