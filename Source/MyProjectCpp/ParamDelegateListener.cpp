// Fill out your copyright notice in the Description page of Project Settings.


#include "ParamDelegateListener.h"
#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Components/PointLightComponent.h"

// Sets default values
AParamDelegateListener::AParamDelegateListener()
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
void AParamDelegateListener::BeginPlay()
{
	Super::BeginPlay();
	
	AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	if (MyGameMode != nullptr)
	{
		//MyGameMode->MyParameterDelegate.BindUObject(this, &AParamDelegateListener::SetLightColor);
		MyGameMode->MyParameterDelegate.BindUObject(this, &AParamDelegateListener::SetLightColor, false);
	}
}

void AParamDelegateListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	AMyGameMode* MyGameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	if (MyGameMode != nullptr)
	{
		MyGameMode->MyParameterDelegate.Unbind();
	}
}

// Called every frame
void AParamDelegateListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AParamDelegateListener::SetLightColor(FLinearColor LightColor, bool EnableLight)
{
	PointLight->SetLightColor(LightColor);
	PointLight->SetVisibility(EnableLight);
}

