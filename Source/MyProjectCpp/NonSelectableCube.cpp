// Fill out your copyright notice in the Description page of Project Settings.


#include "NonSelectableCube.h"
#include "Engine.h"

bool ANonSelectableCube::IsSelectable()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "NotSelectable");
	return false;
}

bool ANonSelectableCube::TrySelect()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Refusing Selection");
	return false;
}

void ANonSelectableCube::Deselect()
{
	unimplemented();
}