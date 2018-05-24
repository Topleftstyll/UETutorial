// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UTGameMode.h"
#include "UTHUD.h"
#include "UTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUTGameMode::AUTGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUTHUD::StaticClass();
}
