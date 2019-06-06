// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyFirstActor.h"
#include "MyUserProfile.h"
#include "MyInterface.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
DECLARE_DELEGATE(FStandardDelegateSignature)
DECLARE_DELEGATE_OneParam(FParamDelegateSignature, FLinearColor)
DECLARE_MULTICAST_DELEGATE(FMulticastDelegateSignature)
UCLASS(Blueprintable)
class MYPROJECTCPP_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	AMyGameMode();
	UPROPERTY()
		AMyFirstActor* SpawnedActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
		TSubclassOf<UMyUserProfile> UPClassName;
	UFUNCTION()
		void DestroyActorFunction();
	UFUNCTION(BlueprintCallable, Category = UIFuncs)
		void ButtonClicked()
		{
			UE_LOG(LogTemp, Warning, TEXT("UI Button Clicked"));
		}
	TArray<IMyInterface*> MyInterfaceInstances;
	FStandardDelegateSignature MyStandardDelegate;
	FParamDelegateSignature MyParameterDelegate;
	FMulticastDelegateSignature MyMulticastDelegate;
protected:
	virtual void BeginPlay() override;
	
};
