// Fill out your copyright notice in the Description page of Project Settings.


#include "King.h"
#include "ConstructorHelpers.h"

AKing::AKing()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	if (MeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
}

void AKing::Die()
{
	OnKingDeath.Broadcast(this);
}