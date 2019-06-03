// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior.h"

// Sets default values
AWarrior::AWarrior()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	lastInput = FVector2D(0.f, 0.f);
}

// Called when the game starts or when spawned
void AWarrior::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Controller)
	{
		float len = lastInput.Size();
		if (len > 1.f)
			lastInput /= len;
		AddMovementInput(GetActorForwardVector(), lastInput.Y);
		AddMovementInput(GetActorRightVector(), lastInput.X);
		// Zero off last input values
		lastInput = FVector2D(0.f, 0.f);
	}
}

// Called to bind functionality to input
void AWarrior::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Forward", this, &AWarrior::Forward);
	PlayerInputComponent->BindAxis("Back", this, &AWarrior::Back);
	PlayerInputComponent->BindAxis("Right", this, &AWarrior::Right);
	PlayerInputComponent->BindAxis("Left", this, &AWarrior::Left);
}

void AWarrior::Forward(float amount)
{
	if (Controller && amount)
	{
		// We use a += of the amount added so that
		// when the other function modifying .Y
		// (::Back()) affects lastInput, it won't
		// overwrite with 0's
		lastInput.Y += amount;
	}
}

void AWarrior::Back(float amount)
{
	if (Controller && amount)
	{
		lastInput.Y += -amount;
	}
}

void AWarrior::Left(float amount)
{
	if (Controller && amount)
	{
		lastInput.X += amount;
	}
}

void AWarrior::Right(float amount)
{
	if (Controller && amount)
	{
		lastInput.X += -amount;
	}
}

