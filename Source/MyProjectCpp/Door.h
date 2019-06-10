// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Openable.h"
#include "Interactable.h"
#include "Door.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API ADoor : public AStaticMeshActor, public IOpenable, public IInteractable
{
	GENERATED_BODY()
public:
	ADoor();
	UFUNCTION()
		bool CanInteract_Implementation() {
			return IInteractable::CanInteract_Implementation();
		};
	UFUNCTION()
		void PerformInteract_Implementation();
	UFUNCTION()
		void Open_Implementation();
};
