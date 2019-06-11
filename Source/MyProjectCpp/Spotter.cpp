// Fill out your copyright notice in the Description page of Project Settings.


#include "Spotter.h"
#include "ConstructorHelpers.h"
#include "CollisionQueryParams.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"

ASpotter::ASpotter()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	if (MeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetRelativeRotation(FRotator(90, 0, 0));
}

void ASpotter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	auto EndLocation = GetActorLocation() + ActorToWorld().TransformVector(FVector(0, 0, -200));
	FHitResult HitResult;
	GetWorld()->SweepSingleByChannel(HitResult, GetActorLocation(), EndLocation, 
		FQuat::Identity,
		ECC_Camera, 
		FCollisionShape::MakeSphere(25),
		FCollisionQueryParams("Spot", true, this));
	APawn* SpottedPlayer = Cast<APawn>(HitResult.Actor.Get());
	if (SpottedPlayer != nullptr)
	{
		OnPlayerSpotted(SpottedPlayer);
	}
	DrawDebugLine(GetWorld(), GetActorLocation(), EndLocation, FColor::Red);
}