// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "Components/BoxComponent.h"
#include "TalkingPawn.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API ATalkingPawn : public ADefaultPawn
{
	GENERATED_BODY()
public:
	ATalkingPawn();
	UPROPERTY()
		UBoxComponent* TalkCollider;
	UFUNCTION()
		void OnTalkOverlap(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
