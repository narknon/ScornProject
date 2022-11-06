using UnrealBuildTool;

public class ScornTarget : TargetRules {
	public ScornTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Scorn",
			"ScornAudioModule",
			"ScornLoadingScreen",
		});
	}
}
