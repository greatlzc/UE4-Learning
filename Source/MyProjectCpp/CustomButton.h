// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SCompoundWidget.h"
#include "SlateBasics.h"

/**
 * 
 */
class MYPROJECTCPP_API SCustomButton : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(SCustomButton)
	: _Label(TEXT("Default Value"))
	, _ButtonClicked()
	{}
	SLATE_ATTRIBUTE(FString, Label)
	SLATE_EVENT(FOnClicked, ButtonClicked)
	SLATE_END_ARGS()
public:
	void Construct(const FArguments& InArgs);
	TAttribute<FString> Label;
	FOnClicked ButtonClicked;
};
