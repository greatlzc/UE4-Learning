// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "King.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKingDeathSignature, AKing*, DeadKing);
UCLASS()
class MYPROJECTCPP_API AKing : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AKing();
	UFUNCTION(BlueprintCallable, Category = King)
		void Die();
	UPROPERTY(BlueprintAssignable)
		FOnKingDeathSignature OnKingDeath;
	
};
