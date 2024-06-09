// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HombreDeBrincar : ModuleRules
{
	public HombreDeBrincar(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
