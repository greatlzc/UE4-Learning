// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Spotter.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API ASpotter : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	ASpotter();
	virtual void Tick(float DeltaSeconds) override;
	UFUNCTION(BlueprintImplementableEvent)
		void OnPlayerSpotted(APawn* Player);
};
