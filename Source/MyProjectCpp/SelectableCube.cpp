// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectableCube.h"
#include "Engine.h"

ASelectableCube::ASelectableCube():Super()
{
	MyMesh->SetNotifyRigidBodyCollision(true);
}

bool ASelectableCube::IsSelectable()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Selectable");
	return true;
}

void ASelectableCube::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent*OtherComp, 
	bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	if (IsSelectable())
	{
		TrySelect();
	}
}