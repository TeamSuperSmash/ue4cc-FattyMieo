// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4CCGameMode.h"
#include "UE4CCHUD.h"
#include "UE4CCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4CCGameMode::AUE4CCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4CCHUD::StaticClass();
}
