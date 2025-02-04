#include "MyCogwheel.h"

AMyCogwheel::AMyCogwheel()
{
	PrimaryActorTick.bCanEverTick = true;
	RootSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComp"));
	SetRootComponent(RootSceneComp);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(RootSceneComp);
}

void AMyCogwheel::BeginPlay()
{
	Super::BeginPlay();
}

void AMyCogwheel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotationBody(DeltaTime);
}

void AMyCogwheel::RotationBody(float DeltaTime)
{
	AddActorLocalRotation(FRotator(0.0f, 0.f, RotationSpeed * DeltaTime));
}

//새로운 엑터 : 타이머를 이용한 왕복 이동