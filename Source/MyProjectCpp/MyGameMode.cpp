// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Engine.h"
#include "MyProjectCppHUD.h"
#include "MyInterface.h"
#include "SingleInterfaceActor.h"
#include "InventoryCharacter.h"
#include "TalkingPawn.h"
#include "AInteractingPawn.h"
#include "MyProjectCpp.h"
#include "Regex.h"
#include "Runtime/XmlParser/Public/XmlFile.h"
#include "Runtime/XmlParser/Public/XmlNode.h"
#include "Json.h"
#include "Runtime/ImageWrapper/Public/IImageWrapper.h"
#include "Runtime/ImageWrapper/Public/IImageWrapperModule.h"
#include "Runtime/Core/Public/HAL/FileManagerGeneric.h"

AMyGameMode::AMyGameMode()
{
	HUDClass = AMyProjectCppHUD::StaticClass();
	DefaultPawnClass = AAInteractingPawn::StaticClass();
}

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Some WARNING Messages:"));

	UE_LOG(LogMyProjectCpp, Display, TEXT("A display message, log is working" ) ); // shows in gray
	UE_LOG(LogMyProjectCpp, Warning, TEXT("A warning message"));
	UE_LOG(LogMyProjectCpp, Error, TEXT("An error message "));

	CreateLogger(LoggerName); // Retrieve the Log by using the LoggerName.
	FMessageLog(LoggerName).Warning(FTEXT("A warning message from gamemode ctor"));

	FString name1 = "Tom";
	int32 health1 = 100;
	FString string1 = FString::Printf(TEXT("Name = %s Health = %d"), *name1, health1);
	UE_LOG(LogTemp, Warning, TEXT("Your String1: %s"), *string1);
	FString name2 = "Jerry";
	int32 health2 = 200;
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(name2));
	args.Add(FStringFormatArg(health2));
	FString string2 = FString::Format(TEXT("Name = {0} Health = {1}"), args);
	UE_LOG(LogTemp, Warning, TEXT("Your String2: %s"), *string2);

	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Actor Spawning..."));
	//SpawnedActor = (AMyFirstActor*)GetWorld()->SpawnActor(AMyFirstActor::StaticClass());

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AMyGameMode::DestroyActorFunction, 10);

	FTransform SpawnLocation;
	FActorSpawnParameters SpawnParam;
	SpawnParam.Owner = nullptr;
	SpawnParam.Instigator = nullptr;
	SpawnParam.Name = "Hello";
	ASingleInterfaceActor* SpawnedActor = GetWorld()->SpawnActor<ASingleInterfaceActor>(ASingleInterfaceActor::StaticClass(), SpawnLocation, SpawnParam);
	if (SpawnedActor->GetClass()->ImplementsInterface(UMyInterface::StaticClass()))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Spawned actor implements interface!"));
	}

	for (TActorIterator<AActor> It(GetWorld(), AActor::StaticClass()); It; ++It)
	{
		AActor* Actor = *It;
		IMyInterface* MyInterfaceInstance = Cast<IMyInterface>(Actor);
		if (MyInterfaceInstance)
		{
			MyInterfaceInstances.Add(MyInterfaceInstance);
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("%d actors implement the interface"), MyInterfaceInstances.Num()));

	TSharedRef<IHttpRequest> http = FHttpModule::Get().CreateRequest();
	FHttpRequestCompleteDelegate& delegate = http->OnProcessRequestComplete();
	//delegate.BindLambda(
	//	[](FHttpRequestPtr request, FHttpResponsePtr response, bool success) -> void
	//	{
	//	if (success)
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("Http Response: %d, %s"), 
	//			request->GetResponse()->GetResponseCode(), 
	//			*request->GetResponse()->GetContentAsString()
	//		);
	//	}
	//	}
	//);
	delegate.BindUObject(this, &AMyGameMode::HttpRequestComplete);

	http->SetURL(TEXT("https://www.baidu.com/"));
	http->ProcessRequest();

	FString TextStr("ABCDEFGHIJKLMN"); 
	FRegexPattern TestPattern(TEXT("C.+H")); 
	FRegexMatcher TestMatcher(TestPattern, TextStr);
	if (TestMatcher.FindNext()) {
		UE_LOG(LogTemp, Warning, TEXT("Found Matching: %d-%d"), TestMatcher.GetMatchBeginning(), TestMatcher.GetMatchEnding()); //2-8
	}

	UE_LOG(LogTemp, Warning, TEXT("Game Dir: %s, Full Path: %s"), *FPaths::ProjectDir(), *FPaths::ConvertRelativePathToFull("Source"));

	FString xmlFilePath = FPaths::ProjectPluginsDir() / TEXT("test.xml");
	FXmlFile xml; 
	xml.LoadFile(xmlFilePath); 
	FXmlNode* RootNode = xml.GetRootNode(); 
	FString from_content = RootNode->FindChildNode("from")->GetContent(); 
	UE_LOG(LogTemp, Warning, TEXT("from=%s"), *from_content);
	FString note_name = RootNode->GetAttribute("name"); 
	UE_LOG(LogTemp, Warning, TEXT("note @name= %s"), *note_name);
	TArray<FXmlNode*> list_node = RootNode->FindChildNode("list")->GetChildrenNodes(); 
	for (FXmlNode* node : list_node) { 
		UE_LOG(LogTemp, Warning, TEXT("list :%s "), *(node->GetContent()));
	}

	FString JsonStr = "[{\"author\":\"Tim\"},{\"age\":\"100\"}]"; 
	TArray<TSharedPtr<FJsonValue>> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonStr); 
	bool BFlag = FJsonSerializer::Deserialize(JsonReader, JsonParsed); 
	if (BFlag)
	{    
		UE_LOG(LogTemp, Warning, TEXT("parse Json success"));    
		FString FStringAuthor = JsonParsed[0]->AsObject()->GetStringField("author");    
		UE_LOG(LogTemp, Warning, TEXT("author = %s"), *FStringAuthor); 
	}

	FString iniFilePath = FPaths::ProjectDir() / TEXT("MyConfig.ini");
	GConfig->SetString(TEXT("MySection"), TEXT("Name"), TEXT("John"), iniFilePath);
	GConfig->Flush(false, iniFilePath);
	FString Result; 
	GConfig->GetString(TEXT("MySection"), TEXT("Name"), Result, iniFilePath);
}

void AMyGameMode::HttpRequestComplete(FHttpRequestPtr request, FHttpResponsePtr response, bool success)
{
	if (success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Http Response: %d, %s"), 
			request->GetResponse()->GetResponseCode(), 
			*request->GetResponse()->GetContentAsString()
		);
	}
}

void AMyGameMode::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();
	}
}

bool AMyGameMode::CovertPNG2JPG(const FString& SourceName, const FString& TargetName) {
	check(SourceName.EndsWith(TEXT(".png")) && TargetName.EndsWith(TEXT(".jpg")));
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));    
	TSharedPtr<IImageWrapper> SourceImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	TSharedPtr<IImageWrapper> TargetImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
	TArray<uint8> SourceImageData;    
	TArray<uint8> TargetImageData;    
	int32 Width, Height;    
	const TArray <uint8>* UncompressedRGBA = nullptr;    
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*SourceName)) 
	{     
		return false;    
	}    
	if (!FFileHelper::LoadFileToArray(SourceImageData , * SourceName))    
	{      
		return false;    
	}    
	if (SourceImageWrapper.IsValid() && SourceImageWrapper->SetCompressed(SourceImageData.GetData(), SourceImageData.Num())) 
	{
		if (SourceImageWrapper->GetRaw(ERGBFormat::RGBA, 8, UncompressedRGBA)) 
		{ 
			Height = SourceImageWrapper->GetHeight();            
			Width = SourceImageWrapper->GetWidth();            
			if (TargetImageWrapper->SetRaw(UncompressedRGBA->GetData(), UncompressedRGBA->Num(), Width, Height, ERGBFormat::RGBA, 8)) 
			{ 
				TargetImageData = TargetImageWrapper->GetCompressed();                
				if (!FFileManagerGeneric::Get().DirectoryExists(*TargetName)) 
				{ 
					FFileManagerGeneric::Get().MakeDirectory(*FPaths::GetPath(TargetName), true); 
				}                
				return FFileHelper::SaveArrayToFile(TargetImageData, *TargetName); 
			} 
		}
	}
	return false;
}