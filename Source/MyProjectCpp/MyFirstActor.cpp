// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstActor.h"
#include "Engine.h"
#include "MyGameMode.h"
#include "ConstructorHelpers.h"

// Sets default values
AMyFirstActor::AMyFirstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	RootComponent = Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void AMyFirstActor::BeginPlay()
{
	Super::BeginPlay();
	
	AMyGameMode* gm = Cast<AMyGameMode>(GetWorld()->GetAuthGameMode());
	if (gm)
	{
		UMyUserProfile* object = NewObject<UMyUserProfile>(GetTransientPackage(), UMyUserProfile::StaticClass());
		//UMyUserProfile* object = NewObject<UMyUserProfile>(GetTransientPackage(), gm->UPClassName);
		object->ConditionalBeginDestroy();
		//GEngine->ForceGarbageCollection(true);
	}

	//SetLifeSpan(10);
}

// Called every frame
void AMyFirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

