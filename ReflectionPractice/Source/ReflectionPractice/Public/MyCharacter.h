#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;
class AMyWand;

UCLASS()
class REFLECTIONPRACTICE_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void Move(const FInputActionValue& value);

	UFUNCTION()
	void Look(const FInputActionValue& value);

	UFUNCTION()
	void StartJump(const FInputActionValue& value);

	UFUNCTION()
	void StopJump(const FInputActionValue& value);

	UFUNCTION()
	void StartSprint(const FInputActionValue& value);

	UFUNCTION()
	void StopSprint(const FInputActionValue& value);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	AMyWand* Wand;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed")
	float NormalSpeed = 600.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed")
	float SpeedMultiplier = 1.8f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Speed")
	float SprintSpeed;
};
