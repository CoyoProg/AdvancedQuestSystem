// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DemoreelRPG : ModuleRules
{
	public DemoreelRPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			
			"InputCore", 
			"EnhancedInput", 
			
			//"AssetTools",
			"UnrealEd",
			"UMG",
        }
		);

        PrivateDependencyModuleNames.AddRange(new string[] 
		{ 
			"AssetTools"
		}
		);
    }
}
