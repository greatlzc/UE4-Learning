// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserProfile.h"

FString UMyUserProfile::ToString()
{
	return FString::Printf(TEXT("An instance of User Profile: %s"), *Name);
}