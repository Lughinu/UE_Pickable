// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UE_Pickable_GameplayUI.generated.h"

class UProgressBar;
/**
 *
 */
UCLASS()
class UE_PICKABLE_API UUE_Pickable_GameplayUI : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		UProgressBar* healthBar = nullptr;


	void SetHealthBar(float value);
};
