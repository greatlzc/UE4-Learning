// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CustomHUD.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API ACustomHUD : public AHUD
{
	GENERATED_BODY()
public:
	virtual void DrawHUD() override;
};
