// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Fatalus.h"
#include "FatalusGameMode.h"
#include "FatalusHUD.h"
#include "FatalusCharacter.h"

AFatalusGameMode::AFatalusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFatalusHUD::StaticClass();
}
