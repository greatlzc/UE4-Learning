// Fill out your copyright notice in the Description page of Project Settings.


#include "ObittingMovementComponent.h"

// Sets default values for this component's properties
UObittingMovementComponent::UObittingMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	RotationSpeed = 100;
	OrbitDistance = 100;
	CurrentValue = 0;
	RotateToFaceOutwards = true;
}


// Called when the game starts
void UObittingMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UObittingMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	float CurrentValueInRadians = FMath::DegreesToRadians<float>(CurrentValue);
	SetRelativeLocation(FVector(OrbitDistance * FMath::Cos(CurrentValueInRadians), OrbitDistance * FMath::Sin(CurrentValueInRadians), GetRelativeLocation().Z));
	if (RotateToFaceOutwards)
	{
		FVector LookDir = GetRelativeLocation().GetSafeNormal();
		FRotator LookAtRot = LookDir.Rotation();
		SetRelativeRotation(LookAtRot);
	}
	CurrentValue = FMath::Fmod(CurrentValue + (RotationSpeed*DeltaTime), 360);
}

