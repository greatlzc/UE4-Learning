// Fill out your copyright notice in the Description page of Project Settings.


#include "PostEditChangePropertyActor.h"
#include "ConstructorHelpers.h"

APostEditChangePropertyActor::APostEditChangePropertyActor()
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

#if WITH_EDITOR
void APostEditChangePropertyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property != nullptr)
	{
		const FName PropertyName(PropertyChangedEvent.Property->GetFName());
		if (PropertyName == GET_MEMBER_NAME_CHECKED(APostEditChangePropertyActor, ShowStaticMesh))
		{
			if (GetStaticMeshComponent() != nullptr)
			{
				GetStaticMeshComponent()->SetVisibility(ShowStaticMesh);
			}
		}
	}
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif