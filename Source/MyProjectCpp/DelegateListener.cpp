// Fill out your copyright notice in the Description page of Project Settings.


#include "DelegateListener.h"
#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Components/PointLightComponent.h"

// Sets default values
ADelegateListener::ADelegateListener()
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
void ADelegateListener::BeginPlay()
{
	Super::BeginPlay();

	AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	if (MyGameMode != nullptr)
	{
		MyGameMode->MyStandardDelegate.BindUObject(this, &ADelegateListener::EnableLight);
	}
}

void ADelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	if (MyGameMode != nullptr)
	{
		MyGameMode->MyStandardDelegate.Unbind();
	}
}

// Called every frame
void ADelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADelegateListener::EnableLight()
{
	PointLight->SetVisibility(true);
}

