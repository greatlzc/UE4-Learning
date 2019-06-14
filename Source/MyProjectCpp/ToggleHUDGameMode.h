// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SlateBasics.h"
#include "ToggleHUDGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECTCPP_API AToggleHUDGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	UPROPERTY()
		FTimerHandle HUDToggleTimer;
	FReply ButtonClicked();
private:
	TSharedPtr<SVerticalBox> Widget;
	TSharedPtr<STextBlock> ButtonLabel;
};
