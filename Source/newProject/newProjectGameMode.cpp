// Copyright Epic Games, Inc. All Rights Reserved.

#include "newProjectGameMode.h"
#include "newProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AnewProjectGameMode::AnewProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
