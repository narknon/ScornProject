using UnrealBuildTool;

public class ScornAudioModule : ModuleRules {
    public ScornAudioModule(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FMODStudio",
            "MovieScene",
            "MovieSceneTracks",
            "UMG",
        });
    }
}
