// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PostEditChangePropertyActor.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API APostEditChangePropertyActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	APostEditChangePropertyActor();
	UPROPERTY(EditAnywhere)
		bool ShowStaticMesh;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
