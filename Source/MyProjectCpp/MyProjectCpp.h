// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MessageLog.h"
#include "MessageLog/Public/MessageLogModule.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMyProjectCpp, Log, All);

#define LOCTEXT_NAMESPACE "MyProjectCppNamespace"

#define FTEXT(x) LOCTEXT(x, x)
FName LoggerName("MyProjectCppLog");
void CreateLogger(FName name)
{
	FMessageLogModule& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
	FMessageLogInitializationOptions InitOptions;
	InitOptions.bShowPages = true; // Don't forget this!
	InitOptions.bShowFilters = true;
	FText LogListingName = FTEXT("MyProjectCpp's Log Listing");
	MessageLogModule.RegisterLogListing(LoggerName, LogListingName, InitOptions);
}
