// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Tree.generated.h"

UENUM(BlueprintType)
enum TreeType
{
	Tree_Poplar,
	Tree_Spruce,
	Tree_Eucalyptus,
	Tree_Redwood
};
/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API ATree : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	ATree();
	UPROPERTY(BlueprintReadWrite)
		TEnumAsByte<TreeType> Type;
};
