// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "ConstructorHelpers.h"
#include "GameFramework/RotatingMovementComponent.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>("MyMesh");
	RotatingComponent = CreateDefaultSubobject<URotatingMovementComponent>("RotatingComponent");
	RootComponent = MyMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Succeeded())
	{
		MyMesh->SetStaticMesh(MeshAsset.Object);
		MyMesh->SetCollisionProfileName(FName(TEXT("Item")));
	}
	RotatingComponent->RotationRate = FRotator(10, 0, 10);
	SetActorEnableCollision(true);
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickup::NotifyActorBeginOverlap(AActor* OtherActor)
{
	OnPickedUp.ExecuteIfBound();
}

