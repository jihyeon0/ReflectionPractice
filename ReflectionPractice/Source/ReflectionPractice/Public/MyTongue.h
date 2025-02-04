// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTongue.generated.h"

UCLASS()
class REFLECTIONPRACTICE_API AMyTongue : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyTongue();

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

protected:
	bool Turn(float DeltaTime);
	void SwapTurningPoint();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move" )
	FVector StartPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	FVector ReturnPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float TargetRotation = 180.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float MoveSpeed = 30.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float TurnSpeed = 90.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	float Distance = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	bool  bTurningPoint = false;

};
