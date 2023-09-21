// Copyright Epic Games, Inc. All Rights Reserved.

#include "demo1GameMode.h"
#include "demo1Character.h"
#include "UObject/ConstructorHelpers.h"

Ademo1GameMode::Ademo1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
