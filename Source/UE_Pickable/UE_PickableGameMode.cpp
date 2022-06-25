// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_PickableGameMode.h"
#include "UE_PickableCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_PickableGameMode::AUE_PickableGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}

void AUE_PickableGameMode::SpawnObject()
{
	float randomX = FMath::RandRange(100, 2200);
	float randomY = FMath::RandRange(100, 2200);

	FVector spawnPosition = FVector(randomX, randomY, 500);


	GetWorld()->SpawnActor(playerRecharge, &spawnPosition, &FRotator::ZeroRotator);
}

void AUE_PickableGameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle spawnTimer;
	GetWorldTimerManager().SetTimer(spawnTimer, this, &AUE_PickableGameMode::SpawnObject, FMath::RandRange(2, 5), true);
}

