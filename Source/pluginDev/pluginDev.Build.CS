
using UnrealBuildTool;

public class pluginDev : ModuleRules
{
    public pluginDev(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
      
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore"});
        //PublicIncludePaths.AddRange(new string[] { "pluginDev/Public" });
        //PrivateIncludePaths.AddRange(new string[] { "pluginDev/Private" });
        //PublicDependencyModuleNames.AddRange(new string[] { "pluginDev" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}