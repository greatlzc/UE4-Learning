// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProjectCppEditor.h"
#include "MyCustomAssetActions.h"
#include "MyCustomAsset.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"

bool FMyCustomAssetActions::HasActions(const TArray<UObject*>& InObjects) const
{
	return true;
}

void FMyCustomAssetActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry(FText::FromString("CustomAssetAction"),
		FText::FromString("Action from Cookbook Recipe"),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.ViewOptions"),
		FUIAction(FExecuteAction::CreateRaw(this, &FMyCustomAssetActions::MyCustomAssetContext_Clicked), FCanExecuteAction())
	);
}

uint32 FMyCustomAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}

FText FMyCustomAssetActions::GetName() const
{
	return FText::FromString(TEXT("My Custom Asset"));
}

UClass* FMyCustomAssetActions::GetSupportedClass() const
{
	return UMyCustomAsset::StaticClass();
}

FColor FMyCustomAssetActions::GetTypeColor() const
{
	return FColor::Emerald;
}

void FMyCustomAssetActions::MyCustomAssetContext_Clicked()
{
	TSharedRef<SWindow> CookbookWindow = SNew(SWindow)
		.Title(FText::FromString(TEXT("Cookbook Window")))
		.ClientSize(FVector2D(800, 400))
		.SupportsMaximize(false)
		.SupportsMinimize(false)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(FText::FromString(TEXT("Hello from Slate2")))
			]
		];
	IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));
	if (MainFrameModule.GetParentWindow().IsValid())
	{
		FSlateApplication::Get().AddWindowAsNativeChild(CookbookWindow, MainFrameModule.GetParentWindow().ToSharedRef());
	}
	else
	{
		FSlateApplication::Get().AddWindow(CookbookWindow);
	}
};
