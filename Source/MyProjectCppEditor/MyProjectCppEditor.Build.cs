using UnrealBuildTool;

public class MyProjectCppEditor : ModuleRules
{
	public MyProjectCppEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PrivatePCHHeaderFile = "MyProjectCppEditor.h";

        PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine", "InputCore", "RHI", "RenderCore" });
		PublicDependencyModuleNames.Add("MyProjectCpp");
		PrivateDependencyModuleNames.AddRange(new string[] {"UnrealEd" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "EditorStyle" });
	}
}