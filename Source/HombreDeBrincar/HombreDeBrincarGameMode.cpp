// Copyright Epic Games, Inc. All Rights Reserved.

#include "HombreDeBrincarGameMode.h"
#include "HombreDeBrincarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHombreDeBrincarGameMode::AHombreDeBrincarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
