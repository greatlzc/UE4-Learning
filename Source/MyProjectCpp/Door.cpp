// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "ConstructorHelpers.h"
#include "Engine.h"

ADoor::ADoor()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		//GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetWorldScale3D(FVector(0.3, 2, 3));
	SetActorEnableCollision(true);
}

void ADoor::PerformInteract_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("The door refuses to budge. Perhaps there is a hidden switch nearby ? "));
}
void ADoor::Open_Implementation()
{
	AddActorLocalOffset(FVector(0, 0, 200));
}
