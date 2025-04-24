// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Advanced_Programming : ModuleRules
{
	public Advanced_Programming(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
