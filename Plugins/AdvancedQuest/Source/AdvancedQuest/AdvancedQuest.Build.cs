// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdvancedQuest : ModuleRules
{
	public AdvancedQuest(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrecompileForTargets = PrecompileTargetsType.Any;

        bPrecompile = true;

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
            }
			);

        if (Target.bBuildEditor)
        {
            PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd", "UMGEditor", "Blutility", });
        }

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
				"UMG",
                "EnhancedInput",
				"Niagara",

            }
			);
	}
}
