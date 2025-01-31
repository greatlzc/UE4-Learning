// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyProjectCppEditorTarget : TargetRules
{
	public MyProjectCppEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("MyProjectCpp");
		//if (Target.Type == TargetType.Editor)//4.16+
        //{
            ExtraModuleNames.AddRange( 
                new string[]
                {
                    "MyProjectCppEditor"
                });
        //}
	}
}
