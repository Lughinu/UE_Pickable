// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Pickable : ModuleRules
{
	public UE_Pickable(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
