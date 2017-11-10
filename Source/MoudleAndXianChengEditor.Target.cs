// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MoudleAndXianChengEditorTarget : TargetRules
{
	public MoudleAndXianChengEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "MoudleAndXianCheng" } );
	}
}
