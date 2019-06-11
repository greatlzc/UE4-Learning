using UnrealBuildTool;
public class MyProjectCppEditor : ModuleRules
{
	public MyProjectCppEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine", "InputCore", "RHI","RenderCore", "ShaderCore" });
		PublicDependencyModuleNames.Add("MyProjectCpp");
		PrivateDependencyModuleNames.AddRange(new string[] {"UnrealEd" });
	}
}