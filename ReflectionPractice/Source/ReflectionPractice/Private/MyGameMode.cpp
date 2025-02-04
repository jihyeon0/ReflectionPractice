#include "MyGameMode.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"
#include "MyWand.h"

AMyGameMode::AMyGameMode()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}

void AMyGameMode::BeginPlay()
{
}
