// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "OnConstructionActor.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API AOnConstructionActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AOnConstructionActor();
	UPROPERTY(EditAnywhere)
		bool ShowStaticMesh;
	virtual void OnConstruction(const FTransform& Transform) override;
};
