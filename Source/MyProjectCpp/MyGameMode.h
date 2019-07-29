// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyFirstActor.h"
#include "MyUserProfile.h"
#include "MyInterface.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Runtime/Online/HTTP/Public/Interfaces/IHttpResponse.h"
#include "Runtime/Online/HTTP/Public/Interfaces/IHttpRequest.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
DECLARE_DELEGATE(FStandardDelegateSignature)
DECLARE_DELEGATE_OneParam(FParamDelegateSignature, FLinearColor)
DECLARE_MULTICAST_DELEGATE(FMulticastDelegateSignature)
UCLASS(Blueprintable)
class MYPROJECTCPP_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	AMyGameMode();
	UPROPERTY()
		AMyFirstActor* SpawnedActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
		TSubclassOf<UMyUserProfile> UPClassName;
	UFUNCTION()
		void DestroyActorFunction();
	UFUNCTION(BlueprintCallable, Category = UIFuncs)
		void ButtonClicked()
		{
			UE_LOG(LogTemp, Warning, TEXT("UI Button Clicked"));
		}
	TArray<IMyInterface*> MyInterfaceInstances;
	FStandardDelegateSignature MyStandardDelegate;
	FParamDelegateSignature MyParameterDelegate;
	FMulticastDelegateSignature MyMulticastDelegate;

	void HttpRequestComplete(FHttpRequestPtr request, FHttpResponsePtr response, bool success);
	bool CovertPNG2JPG(const FString& SourceName, const FString& TargetName);
protected:
	virtual void BeginPlay() override;
	
};
