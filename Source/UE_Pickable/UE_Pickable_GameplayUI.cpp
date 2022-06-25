// Fill out your copyright notice in the Description page of Project Settings.


#include "UE_Pickable_GameplayUI.h"

#include "Components/ProgressBar.h"

void UUE_Pickable_GameplayUI::SetHealthBar(float value)
{

	if (healthBar != nullptr)
	{
		healthBar->SetPercent(value);
	}
}
