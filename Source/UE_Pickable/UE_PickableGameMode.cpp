// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_PickableGameMode.h"
#include "UE_PickableCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_PickableGameMode::AUE_PickableGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
