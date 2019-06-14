// Fill out your copyright notice in the Description page of Project Settings.


#include "ToggleHUDGameMode.h"
#include "Engine.h"

void AToggleHUDGameMode::BeginPlay()
{
	Super::BeginPlay();
	Widget = SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateUObject(this, &AToggleHUDGameMode::ButtonClicked))
			.Content()
			[
				SAssignNew(ButtonLabel, STextBlock)
				.Text(FText::FromString(TEXT("Click me!")))
			]
		];
	GEngine->GameViewport->AddViewportWidgetForPlayer(GetWorld()->GetFirstLocalPlayerFromController(), Widget.ToSharedRef(), 1);
	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
	GEngine->GetFirstLocalPlayerController(GetWorld())->SetInputMode(FInputModeUIOnly().SetWidgetToFocus(Widget));
	GetWorld()->GetTimerManager().SetTimer(HUDToggleTimer,
		FTimerDelegate::CreateLambda(
			[this] {
				if (this->Widget->GetVisibility().IsVisible())
				{
					this->Widget->SetVisibility(EVisibility::Hidden);
				}
				else
				{
					this->Widget->SetVisibility(EVisibility::Visible);
				}
			}
		), 5, true);
}

void AToggleHUDGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearTimer(HUDToggleTimer);
}

FReply AToggleHUDGameMode::ButtonClicked()
{
	ButtonLabel->SetText(FString(TEXT("Clicked!")));
	return FReply::Handled();
}