// Fill out your copyright notice in the Description page of Project Settings.


#include "TalkingPawn.h"
#include "Talker.h"

ATalkingPawn::ATalkingPawn():Super()
{
	PrimaryActorTick.bCanEverTick = true;
	TalkCollider = CreateDefaultSubobject<UBoxComponent>("TalkCollider");
	TalkCollider->SetBoxExtent(FVector(200, 200, 100));
	TalkCollider->OnComponentBeginOverlap.AddDynamic(this, &ATalkingPawn::OnTalkOverlap);
	TalkCollider->AttachTo(RootComponent);
}

void ATalkingPawn::OnTalkOverlap(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetClass()->ImplementsInterface(UTalker::StaticClass()))
	{
		ITalker::Execute_StartTalking(OtherActor);
	}
}