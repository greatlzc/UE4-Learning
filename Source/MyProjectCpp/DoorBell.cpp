// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorBell.h"
#include "Openable.h"
#include "ConstructorHelpers.h"

ADoorBell::ADoorBell()
{
	HasBeenPushed = false;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		//GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetWorldScale3D(FVector(0.5, 0.5, 0.5));
	SetActorEnableCollision(true);
	DoorToOpen = nullptr;
}

bool ADoorBell::CanInteract_Implementation()
{
	return !HasBeenPushed;
}
void ADoorBell::PerformInteract_Implementation()
{
	HasBeenPushed = true;
	if (DoorToOpen->GetClass()->ImplementsInterface(UOpenable::StaticClass()))
	{
		IOpenable::Execute_Open(DoorToOpen);
	}
}