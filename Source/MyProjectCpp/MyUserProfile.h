// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyUserProfile.generated.h"

USTRUCT(BlueprintType)
struct MYPROJECTCPP_API FColoredTexture
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		UTexture* Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		FLinearColor Color;
};

UENUM()
enum Status
{
	Stopped UMETA(DisplayName = "Stopped"),
	Moving UMETA(DisplayName = "Moving"),
	Attacking UMETA(DisplayName = "Attacking"),
};

/**
 * my user profile
 */
UCLASS(Blueprintable)
class MYPROJECTCPP_API UMyUserProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
		TSubclassOf<UObject> UClassOfPlayer;	//Display any UClass
	UPROPERTY(EditAnywhere, meta = (MetaClass = "GameMode"), Category = "Unit")
		FStringClassReference UClassGameMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
		FColoredTexture Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
		TEnumAsByte<Status> status;
	UFUNCTION(BlueprintCallable, Category = "Prop")
		FString ToString();
	
};
