// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToJamGameMode.h"
#include "ToJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToJamGameMode::AToJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
