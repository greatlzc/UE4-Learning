// Fill out your copyright notice in the Description page of Project Settings.


#include "OnConstructionActor.h"
#include "ConstructorHelpers.h"

AOnConstructionActor::AOnConstructionActor()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	if (MeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	ShowStaticMesh = true;
}

void AOnConstructionActor::OnConstruction(const FTransform& Transform)
{
	GetStaticMeshComponent()->SetVisibility(ShowStaticMesh);
}