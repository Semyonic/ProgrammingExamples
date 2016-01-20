//
//  ProgrammingExamples.Target.cs
//  ProgrammingExamples
//
//  Created by Semih Onay on 20.01.2016.
//  Copyright © 2016 Semih Onay. All rights reserved.
//

using UnrealBuildTool;
using System.Collections.Generic;

public class ProgrammingExamplesTarget : TargetRules
{
	public ProgrammingExamplesTarget(TargetInfo Target)
	{
		Type = TargetType.Game;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "ProgrammingExamples" } );
	}
}
