#include "MyProjectCppEditor.h"
#include "LevelEditor.h"
#include "SlateBasics.h"
#include "MultiBoxExtender.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "CookbookCommands.h"
#include "MyCustomAssetActions.h"

IMPLEMENT_GAME_MODULE(FMyProjectCppEditorModule, MyProjectCppEditor)

DEFINE_LOG_CATEGORY(MyProjectCppEditor)

#define LOCTEXT_NAMESPACE ""

void FMyProjectCppEditorModule::StartupModule()
{
	UE_LOG(MyProjectCppEditor, Warning, TEXT("StartupModule"));

	FCookbookCommands::Register();

	TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList());
	CommandList->MapAction(FCookbookCommands::Get().MyButton, 
		FExecuteAction::CreateRaw(this, &FMyProjectCppEditorModule::MyButton_Clicked), FCanExecuteAction());
	ToolbarExtender = MakeShareable(new FExtender());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	//Extension = ToolbarExtender->AddToolBarExtension("Compile", EExtensionHook::Before, CommandList, 
	//	FToolBarExtensionDelegate::CreateRaw(this, &FMyProjectCppEditorModule::AddToolbarExtension));
	//LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);

	Extension = ToolbarExtender->AddMenuExtension("LevelEditor", EExtensionHook::Before, CommandList, 
		FMenuExtensionDelegate::CreateRaw(this, &FMyProjectCppEditorModule::AddMenuExtension));
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(ToolbarExtender);

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	auto Actions = MakeShareable(new FMyCustomAssetActions);
	AssetTools.RegisterAssetTypeActions(Actions);
	CreatedAssetTypeActions.Add(Actions);

	DisplayTestCommand = IConsoleManager::Get().RegisterConsoleCommand(
		TEXT("DisplayTestCommandWindow"), 
		TEXT("test"),
		FConsoleCommandDelegate::CreateRaw(this, &FMyProjectCppEditorModule::DisplayWindow, FString(TEXT("Test Command Window"))), 
		ECVF_Default
	);
	DisplayUserSpecifiedWindow = IConsoleManager::Get().RegisterConsoleCommand(
		TEXT("DisplayUserSpecifiedWindow"), 
		TEXT("test"),
		FConsoleCommandWithArgsDelegate::CreateLambda(
			[&](const TArray< FString >& Args)
			{
				FString WindowTitle;
				for (FString Arg : Args)
				{
					WindowTitle += Arg;
					WindowTitle.AppendChar(' ');
				}
				this->DisplayWindow(WindowTitle);
			}
		), 
		ECVF_Default
	);
}

void FMyProjectCppEditorModule::ShutdownModule()
{
	UE_LOG(MyProjectCppEditor, Warning, TEXT("ShutdownModule"));

	ToolbarExtender->RemoveExtension(Extension.ToSharedRef());
	Extension.Reset();
	ToolbarExtender.Reset();

	// fix me: may crash
	//IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	//for (auto Action : CreatedAssetTypeActions)
	//{
	//	AssetTools.UnregisterAssetTypeActions(Action.ToSharedRef());
	//}

	if(DisplayTestCommand)
	{
		IConsoleManager::Get().UnregisterConsoleObject(DisplayTestCommand);
		DisplayTestCommand = nullptr;
	}
	if(DisplayUserSpecifiedWindow)
	{
		IConsoleManager::Get().UnregisterConsoleObject(DisplayUserSpecifiedWindow);
		DisplayUserSpecifiedWindow = nullptr;
	}
}

void FMyProjectCppEditorModule::MyButton_Clicked()
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
				.Text(FText::FromString(TEXT("Hello from Slate")))
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
}

void FMyProjectCppEditorModule::AddToolbarExtension(FToolBarBuilder &builder)
{
	FSlateIcon IconBrush = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.ViewOptions", "LevelEditor.ViewOptions.Small");
	builder.AddToolBarButton(FCookbookCommands::Get().MyButton, NAME_None, FText::FromString("My Button"), FText::FromString("Click me to display a message"), IconBrush, NAME_None);
}

void FMyProjectCppEditorModule::AddMenuExtension(FMenuBuilder &builder)
{
	FSlateIcon IconBrush = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.ViewOptions", "LevelEditor.ViewOptions.Small");
	builder.AddMenuEntry(FCookbookCommands::Get().MyButton);
}

void FMyProjectCppEditorModule::DisplayWindow(FString WindowTitle)
{
	TSharedRef<SWindow> CookbookWindow = SNew(SWindow)
		.Title(FText::FromString(WindowTitle))
		.ClientSize(FVector2D(800, 400))
		.SupportsMaximize(false)
		.SupportsMinimize(false);
	IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));
	if (MainFrameModule.GetParentWindow().IsValid())
	{
		FSlateApplication::Get().AddWindowAsNativeChild(CookbookWindow, MainFrameModule.GetParentWindow().ToSharedRef());
	}
	else
	{
		FSlateApplication::Get().AddWindow(CookbookWindow);
	}
}

#undef LOCTEXT_NAMESPACE