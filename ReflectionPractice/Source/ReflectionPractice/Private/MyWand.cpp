#include "MyWand.h"

AMyWand::AMyWand()
{
	PrimaryActorTick.bCanEverTick = false;
	RootSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComp"));
	SetRootComponent(RootSceneComp);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(RootSceneComp);

}

void AMyWand::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyWand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

