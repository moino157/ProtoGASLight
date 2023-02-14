// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototypingGameMode.h"
#include "PrototypingCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototypingGameMode::APrototypingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
