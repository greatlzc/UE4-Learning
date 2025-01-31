// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Undead.h"
#include "Snail.generated.h"

UCLASS()
class MYPROJECTCPP_API ASnail : public AActor, public IUndead
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnail();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
