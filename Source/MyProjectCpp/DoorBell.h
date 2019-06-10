// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Interactable.h"
#include "DoorBell.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API ADoorBell : public AStaticMeshActor, public IInteractable
{
	GENERATED_BODY()
public:
	ADoorBell();
	bool CanInteract_Implementation();
	void PerformInteract_Implementation();
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		AActor* DoorToOpen;
private:
	bool HasBeenPushed;
};
