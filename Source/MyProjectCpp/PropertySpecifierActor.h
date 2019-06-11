// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PropertySpecifierActor.generated.h"

UCLASS()
class MYPROJECTCPP_API APropertySpecifierActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APropertySpecifierActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
		bool EditDefaultsOnly;
	UPROPERTY(EditInstanceOnly)
		bool EditInstanceOnly;
	UPROPERTY(EditAnywhere)
		bool EditAnywhere;
	UPROPERTY(VisibleDefaultsOnly)
		bool VisibleDefaultsOnly;
	UPROPERTY(VisibleInstanceOnly)
		bool VisibleInstanceOnly;
	UPROPERTY(VisibleAnywhere)
		bool VisibleAnywhere;
	UPROPERTY(BlueprintReadWrite, Category = Cookbook)
		bool ReadWriteProperty;
	UPROPERTY(BlueprintReadOnly, Category = Cookbook)
		bool ReadOnlyProperty;
};
