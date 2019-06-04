// Fill out your copyright notice in the Description page of Project Settings.


#include "Barracks.h"
#include "BarracksUnit.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABarracks::ABarracks()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>("BuildingMesh");
	SpawnPoint = CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");
	SpawnInterval = 10;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Succeeded())
	{
		BuildingMesh->SetStaticMesh(MeshAsset.Object);
		BuildingMesh->SetCollisionProfileName(FName(TEXT("Pawn")));
	}
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystem(TEXT("ParticleSystem'/Engine/Tutorial/SubEditors/TutorialAssets/TutorialParticleSystem.TutorialParticleSystem'"));
	if (ParticleSystem.Succeeded())
	{
		SpawnPoint->SetTemplate(ParticleSystem.Object);
	}
	SpawnPoint->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));
	UnitToSpawn = ABarracksUnit::StaticClass();
}

// Called when the game starts or when spawned
void ABarracks::BeginPlay()
{
	Super::BeginPlay();
	RootComponent = BuildingMesh;
	SpawnPoint->AttachTo(RootComponent);
	SpawnPoint->SetRelativeLocation(FVector(150, 0, 0));
	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &ABarracks::SpawnUnit, SpawnInterval, true);
}

// Called every frame
void ABarracks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarracks::SpawnUnit()
{
	FVector SpawnLocation = SpawnPoint->GetComponentLocation();
	GetWorld()->SpawnActor(UnitToSpawn, &SpawnLocation);
}
void ABarracks::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
}

