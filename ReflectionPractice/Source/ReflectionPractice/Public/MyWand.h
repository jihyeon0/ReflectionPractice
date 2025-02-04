// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWand.generated.h"

UCLASS()
class REFLECTIONPRACTICE_API AMyWand : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyWand();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cogwheel|Components")
	USceneComponent* RootSceneComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cogwheel|Components")
	UStaticMeshComponent* StaticMeshComp;

public:	
	virtual void Tick(float DeltaTime) override;

};
