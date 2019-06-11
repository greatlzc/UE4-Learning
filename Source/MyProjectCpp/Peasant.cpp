// Fill out your copyright notice in the Description page of Project Settings.


#include "Peasant.h"
#include "Engine.h"
#include "ConstructorHelpers.h"

APeasant::APeasant()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
}

void APeasant::Flee(AKing* DeadKing)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Waily Waily!"));
	FVector FleeVector = GetActorLocation() - (DeadKing->GetActorLocation());
	FleeVector.Normalize();
	FleeVector *= 500;
	SetActorLocation(GetActorLocation() + FleeVector);
}