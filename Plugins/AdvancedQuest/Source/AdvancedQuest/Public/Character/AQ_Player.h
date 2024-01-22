// Copyright 2024, Coyo Prog, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AQ_Player.generated.h"

class UInputMappingContext;
struct FInputActionValue;

/**
	IMPORTANT: This class is not meant to be used in your projects, this is just
	an example to showcase how to use the plugin.
	Everything in here will be less well-thought-out and Optimized.
	It's just a very quick implementation of a very basic Player.
 */
UCLASS(Blueprintable)
class ADVANCEDQUEST_API AAQ_Player : public ACharacter
{
	GENERATED_BODY()

public:
	AAQ_Player();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* Movement */
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, Category = "Input|Mouse")
	float MouseSensitivityX = 1.f;

	UPROPERTY(EditAnywhere, Category = "Input|Mouse")
	float MouseSensitivityY = 1.f;


	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;


	/* Controllers */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;


	/* Interact */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Advanced Quest | Events")
	void Interact();

protected:
	virtual void BeginPlay() override;
};
