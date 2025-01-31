// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

DECLARE_DELEGATE(FPickedupEventSignature)
UCLASS()
class MYPROJECTCPP_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MyMesh;
	UPROPERTY()
		class URotatingMovementComponent* RotatingComponent;
	FPickedupEventSignature OnPickedUp;
};
