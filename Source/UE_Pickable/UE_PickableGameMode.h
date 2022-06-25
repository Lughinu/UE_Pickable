// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "UE_PickableGameMode.generated.h"

UCLASS(minimalapi)
class AUE_PickableGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AUE_PickableGameMode();

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> playerRecharge;

	void SpawnObject();
	virtual void BeginPlay() override;
};



