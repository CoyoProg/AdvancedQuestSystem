// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdvancedQuest_Editor : ModuleRules
{
	public AdvancedQuest_Editor(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PrecompileForTargets = PrecompileTargetsType.Any;
        bPrecompile = true;

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "AdvancedQuest",
            }
			);



        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Projects",
                "InputCore",
                "EditorFramework",
                "ToolMenus",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",


                "UnrealEd",
                "UMGEditor",
                "Blutility",
            }
            );
    }
}