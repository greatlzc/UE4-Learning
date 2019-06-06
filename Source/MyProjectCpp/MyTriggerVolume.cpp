// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerVolume.h"
#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"

// Sets default values
AMyTriggerVolume::AMyTriggerVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTriggerVolume::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTriggerVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyTriggerVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("%s entered me"),	*(OtherActor->GetName())));

	AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	MyGameMode->MyStandardDelegate.ExecuteIfBound();
	MyGameMode->MyParameterDelegate.ExecuteIfBound(FLinearColor(1, 0, 0,1));
	MyGameMode->MyMulticastDelegate.Broadcast();
	OnPlayerEntered.Broadcast();
}
void AMyTriggerVolume::NotifyActorEndOverlap(AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("%s left me"), *(OtherActor->GetName())));
}

