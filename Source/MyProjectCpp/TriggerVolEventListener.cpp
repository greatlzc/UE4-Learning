// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerVolEventListener.h"
#include "Components/PointLightComponent.h"

// Sets default values
ATriggerVolEventListener::ATriggerVolEventListener()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	RootComponent = SceneRoot;
	PointLight->AttachTo(SceneRoot);
}

// Called when the game starts or when spawned
void ATriggerVolEventListener::BeginPlay()
{
	Super::BeginPlay();
	
	if (TriggerEventSource != nullptr)
	{
		TriggerEventSource->OnPlayerEntered.AddUObject(this, &ATriggerVolEventListener::OnTriggerEvent);
	}
}

// Called every frame
void ATriggerVolEventListener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerVolEventListener::OnTriggerEvent()
{
	PointLight->SetLightColor(FLinearColor(0, 1, 0, 1));
}

