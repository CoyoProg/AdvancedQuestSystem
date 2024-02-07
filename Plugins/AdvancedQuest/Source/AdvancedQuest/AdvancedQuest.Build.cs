// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdvancedQuest : ModuleRules
{
	public AdvancedQuest(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
            }
			);

        if (Target.Type == TargetType.Editor)
        {
            PublicDependencyModuleNames.AddRange(new string[]{"UnrealEd"});
        }

        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"InputCore",
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
