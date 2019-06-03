// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryActor.h"
#include "ConstructorHelpers.h"

AInventoryActor::AInventoryActor():Super()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(FName(TEXT("Pawn")));
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}

void AInventoryActor::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AInventoryActor::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}