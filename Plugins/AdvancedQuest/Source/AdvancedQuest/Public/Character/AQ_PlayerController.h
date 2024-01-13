#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AQ_PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

/**
	IMPORTANT: This class is not meant to be used in your projects, this is just
	an example to showcase how to use the plugin.
	Everything in here will be less well-thaught-out and Optimized.
	It's just a very quick implementation of a very basic Player.
 */
UCLASS(Blueprintable)
class ADVANCEDQUEST_API AAQ_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Inputs
	UPROPERTY(EditAnywhere, Category = "Input|Movement")
	FName MoveForwardInputName = FName();

	UPROPERTY(EditAnywhere, Category = "Input|Movement")
	FName MoveRightInputName = FName();

	UPROPERTY(EditAnywhere, Category = "Input|Movement")
	FName JumpInputName = FName();

	UPROPERTY(EditAnywhere, Category = "Input|Mouse")
	FName LookUpInputName = FName();

	UPROPERTY(EditAnywhere, Category = "Input|Mouse")
	FName LookRightInputName = FName();

	UPROPERTY(EditAnywhere, Category = "Input|Mouse")
	float MouseSensitivityX = 1.f;

	UPROPERTY(EditAnywhere, Category = "Input|Mouse")
	float MouseSensitivityY = 1.f;


protected:
	virtual void BeginPlay() override;

	void MoveForward(float value);
	void MoveRight(float value);
	void Jump();
	virtual void AddPitchInput(float value) override;
	virtual void AddYawInput(float value) override;

	virtual void SetupInputComponent() override;
	void SetupCameraComponent();

private:
	virtual void SetPawn(APawn* InPawn) override;
	class ACharacter* Character = nullptr;
};
