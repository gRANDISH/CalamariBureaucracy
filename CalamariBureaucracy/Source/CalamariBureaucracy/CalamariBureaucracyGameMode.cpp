// Copyright Epic Games, Inc. All Rights Reserved.

#include "CalamariBureaucracyGameMode.h"
#include "CalamariBureaucracyPlayerController.h"
#include "CalamariBureaucracyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACalamariBureaucracyGameMode::ACalamariBureaucracyGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACalamariBureaucracyPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}