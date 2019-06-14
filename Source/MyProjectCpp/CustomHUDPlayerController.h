// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CustomHUDPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API ACustomHUDPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
};
