#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCogwheel.generated.h"

UCLASS()
class REFLECTIONPRACTICE_API AMyCogwheel : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyCogwheel();

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

protected:
	UFUNCTION(BlueprintCallable, Category = "Cogwheel|Actions")
	void RotationBody(float DeltaTime);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cogwheel|Components")
	USceneComponent* RootSceneComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cogwheel|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed");
	float RotationSpeed = 90.f;
};
