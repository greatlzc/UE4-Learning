// Fill out your copyright notice in the Description page of Project Settings.


#include "Killable.h"
#include "Engine.h"

// Add default functionality here for any IKillable functions that are not pure virtual.
bool IKillable::IsDead()
{
	return false;
}
void IKillable::Die()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Arrrgh");
	AActor* Me = Cast<AActor>(this);
	if (Me)
	{
		Me->Destroy();
	}
}