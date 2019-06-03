// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyFirstActor.h"
#include "MyUserProfile.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MYPROJECTCPP_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	AMyGameMode();
	UPROPERTY()
		AMyFirstActor* SpawnedActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
		TSubclassOf<UMyUserProfile> UPClassName;
	UFUNCTION()
		void DestroyActorFunction();
protected:
	virtual void BeginPlay() override;
	
};
