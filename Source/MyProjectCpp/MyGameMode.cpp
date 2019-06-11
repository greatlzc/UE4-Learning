// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Engine.h"
#include "MyProjectCppHUD.h"
#include "MyInterface.h"
#include "SingleInterfaceActor.h"
#include "InventoryCharacter.h"
#include "TalkingPawn.h"
#include "AInteractingPawn.h"

AMyGameMode::AMyGameMode()
{
	HUDClass = AMyProjectCppHUD::StaticClass();
	DefaultPawnClass = AAInteractingPawn::StaticClass();
}

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

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

	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Actor Spawning..."));
	//SpawnedActor = (AMyFirstActor*)GetWorld()->SpawnActor(AMyFirstActor::StaticClass());

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AMyGameMode::DestroyActorFunction, 10);

	FTransform SpawnLocation;
	ASingleInterfaceActor* SpawnedActor = GetWorld()->SpawnActor<ASingleInterfaceActor>(ASingleInterfaceActor::StaticClass(), SpawnLocation);
	if (SpawnedActor->GetClass()->ImplementsInterface(UMyInterface::StaticClass()))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Spawned actor implements interface!"));
	}

	for (TActorIterator<AActor> It(GetWorld(), AActor::StaticClass()); It; ++It)
	{
		AActor* Actor = *It;
		IMyInterface* MyInterfaceInstance = Cast<IMyInterface>(Actor);
		if (MyInterfaceInstance)
		{
			MyInterfaceInstances.Add(MyInterfaceInstance);
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("%d actors implement the interface"), MyInterfaceInstances.Num()));
}

void AMyGameMode::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
	}
}