#include "MyProjectCppEditor.h"
#include "Commands.h"
#include "CookbookCommands.h"

void FCookbookCommands::RegisterCommands()
{
#define LOCTEXT_NAMESPACE ""
	UI_COMMAND(MyButton, "Cookbook", "Demo Cookbook Toolbar Command", EUserInterfaceActionType::Button, FInputGesture());
#undef LOCTEXT_NAMESPACE
}