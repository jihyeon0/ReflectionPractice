#include "MyTongue.h"

AMyTongue::AMyTongue()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyTongue::BeginPlay()
{
	Super::BeginPlay();
	StartPos = GetActorLocation();
	FVector ForwardLength = GetActorForwardVector() * 3000.f;
	ReturnPos = StartPos + ForwardLength;
}

void AMyTongue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	if (!bTurningPoint)
	{
		FVector Direction = (ReturnPos - GetActorLocation()).GetSafeNormal();
		FVector NewLocation = GetActorLocation() + Direction * MoveSpeed * DeltaTime;
		SetActorLocation(NewLocation);
		Distance = (ReturnPos - GetActorLocation()).Size();
		if (Distance <= 10.f)
		{
			bTurningPoint = true;
			SetActorLocation(ReturnPos);
			Distance = 0.f;
		}
	}
	else
	{
		if (Turn(DeltaTime))
		{
			SwapTurningPoint();
		}
	}
}

bool AMyTongue::Turn(float DeltaTime)
{
	if (FMath::Abs(TargetRotation - GetActorRotation().Yaw) > 3.f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Turn2"));
		float TotalRotation = GetActorRotation().Yaw + TurnSpeed * DeltaTime;
		SetActorRotation(FRotator(0.f, TotalRotation, 0.f));
		return false;
	}
	SetActorRotation(FRotator(0.f, TargetRotation, 0.f));
	TargetRotation = GetActorRotation().Yaw - 180.f;
	return true;
}

void AMyTongue::SwapTurningPoint()
{
	FVector Temp = StartPos;
	StartPos = ReturnPos;
	ReturnPos = Temp;
	bTurningPoint = false;
}
