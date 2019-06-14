// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomHUD.h"
#include "Engine.h"

void ACustomHUD::DrawHUD()
{
	Super::DrawHUD();
	Canvas->DrawText(GEngine->GetSmallFont(), TEXT("Test string to be printed to screen"), 10, 10);
	DrawRect(FLinearColor::Blue, 5, 25, 100, 5);
}