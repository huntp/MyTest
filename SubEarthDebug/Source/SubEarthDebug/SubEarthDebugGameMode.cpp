// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SubEarthDebug.h"
#include "SubEarthDebugGameMode.h"
#include "SubEarthDebugHUD.h"
#include "SubEarthDebugCharacter.h"

ASubEarthDebugGameMode::ASubEarthDebugGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASubEarthDebugHUD::StaticClass();
}
