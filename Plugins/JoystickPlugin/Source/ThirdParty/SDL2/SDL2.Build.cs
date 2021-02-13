// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class SDL2 : ModuleRules
{
	public SDL2(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

        PublicDefinitions.Add("SDL_STATIC=1");
        PublicDefinitions.Add("SDL_SHARED=0");
        PublicDefinitions.Add("EPIC_EXTENSIONS=0");
        PublicDefinitions.Add("SDL_DEPRECATED=1");
        PublicDefinitions.Add("SDL_WITH_EPIC_EXTENSIONS=1");
        PublicDefinitions.Add("WIN32");

        string includePath = Path.Combine(ModuleDirectory, "include");
        PublicIncludePaths.AddRange(new string[] { includePath });

        if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "SDL2.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "SDL2main.lib"));
            PublicDelayLoadDLLs.Add("SDL2.dll");            
        }
        
    }
}