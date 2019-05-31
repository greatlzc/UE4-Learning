// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Engine.h"
#include "MyProjectCppHUD.h"

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

	HUDClass = AMyProjectCppHUD::StaticClass();

	UE_LOG(LogTemp, Warning, TEXT("Some WARNING Messages:"));

	FString name1 = "Tom";
	int32 health1 = 100;
	FString string1 = FString::Printf(TEXT("Name = %s Health = %d"), *name1, health1);
	UE_LOG(LogTemp, Warning, TEXT("Your String1: %s"), *string1);
	FString name2 = "Jerry";
	int32 health2 = 200;
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(name2));
	args.Add(FStringFormatArg(health2));
	FString string2 = FString::Format(TEXT("Name = {0} Health = {1}"), args);
	UE_LOG(LogTemp, Warning, TEXT("Your String2: %s"), *string2);

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Actor Spawning..."));

	SpawnedActor = (AMyFirstActor*)GetWorld()->SpawnActor(AMyFirstActor::StaticClass());

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AMyGameMode::DestroyActorFunction, 10);
}

void AMyGameMode::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
	}
}