// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MoudleAndXianChengTarget : TargetRules
{
	public MoudleAndXianChengTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "MoudleAndXianCheng","pluginDev"} );
        //OutExtraModuleNames.AddRange(new string[] { "pluginDev" });
    }
//    public override void SetupBinaries(
//    Targetinfo target,
//    ref List<UeBuildBinaryConfiguration>
//    UeBuildBinaryConfigurations,
//    ref List<string> OutExtraModuleNames
//    )
//{
//        OutExtraModuleNames.addrange(new string[] { "plugindev" });

//}
}
