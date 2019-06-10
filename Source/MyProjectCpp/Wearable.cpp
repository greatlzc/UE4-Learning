// Fill out your copyright notice in the Description page of Project Settings.


#include "Wearable.h"
#include "Engine.h"

// Add default functionality here for any IWearable functions that are not pure virtual.
int32 IWearable::GetStrengthRequirement_Implementation()
{
	return 0;
}

bool IWearable::CanEquip_Implementation(APawn* Wearer)
{
	return true;
}

void IWearable::OnEquip_Implementation(APawn* Wearer)
{ 
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Item being worn");
}