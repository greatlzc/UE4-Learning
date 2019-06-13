#include "MyProjectCppEditor.h"
#include "LevelEditor.h"
#include "SlateBasics.h"
#include "MultiBoxExtender.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "CookbookCommands.h"

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
}

void FMyProjectCppEditorModule::ShutdownModule()
{
	UE_LOG(MyProjectCppEditor, Warning, TEXT("ShutdownModule"));

	ToolbarExtender->RemoveExtension(Extension.ToSharedRef());
	Extension.Reset();
	ToolbarExtender.Reset();
}

void FMyProjectCppEditorModule::MyButton_Clicked()
{
	TSharedRef<SWindow> CookbookWindow = SNew(SWindow).Title(FText::FromString(TEXT("Cookbook Window"))).ClientSize(FVector2D(800, 400)).SupportsMaximize(false).SupportsMinimize(false);
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

#undef LOCTEXT_NAMESPACE