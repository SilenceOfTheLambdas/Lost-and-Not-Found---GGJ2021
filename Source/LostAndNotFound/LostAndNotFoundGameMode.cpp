// Copyright Epic Games, Inc. All Rights Reserved.

#include "LostAndNotFoundGameMode.h"
#include "LostAndNotFoundHUD.h"
#include "LostAndNotFoundCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALostAndNotFoundGameMode::ALostAndNotFoundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALostAndNotFoundHUD::StaticClass();
}
