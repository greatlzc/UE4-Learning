// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API AMyGameState : public AGameState
{
	GENERATED_BODY()
public:
	AMyGameState();
	UFUNCTION()
		void SetScore(int32 NewScore);
	UFUNCTION()
		int32 GetScore();
private:
	UPROPERTY()
		int32 CurrentScore;
};
