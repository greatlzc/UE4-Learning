// Fill out your copyright notice in the Description page of Project Settings.


#include "MulticastDelegateListener.h"
#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Components/PointLightComponent.h"

// Sets default values
AMulticastDelegateListener::AMulticastDelegateListener()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	RootComponent = SceneRoot;
	PointLight->AttachTo(SceneRoot);
	PointLight->SetVisibility(false);
}

// Called when the game starts or when spawned
void AMulticastDelegateListener::BeginPlay()
{
	Super::BeginPlay();
	
	AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	if (MyGameMode != nullptr)
	{
		MyDelegateHandle = MyGameMode->MyMulticastDelegate.AddUObject(this, &AMulticastDelegateListener::ToggleLight);
	}
	
}

void AMulticastDelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	if (MyGameMode != nullptr)
	{
		MyGameMode->MyMulticastDelegate.Remove(MyDelegateHandle);
	}
}

// Called every frame
void AMulticastDelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMulticastDelegateListener::ToggleLight()
{
	PointLight->ToggleVisibility();
}

