#pragma once
#include "Engine.h"
#include "ModuleInterface.h"
#include "ModuleManager.h"
#include "UnrealEd.h"
#include "CookbookCommands.h"
#include "AssetTools/Public/IAssetTypeActions.h"

DECLARE_LOG_CATEGORY_EXTERN(MyProjectCppEditor, All, All)

class FMyProjectCppEditorModule: public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	TSharedPtr<FExtender> ToolbarExtender;
	TSharedPtr<const FExtensionBase> Extension;
	void MyButton_Clicked();
	void AddToolbarExtension(FToolBarBuilder &builder);
	void AddMenuExtension(FMenuBuilder &builder);
	TArray< TSharedPtr<IAssetTypeActions> > CreatedAssetTypeActions;
};