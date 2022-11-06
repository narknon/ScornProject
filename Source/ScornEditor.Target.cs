using UnrealBuildTool;

public class ScornEditorTarget : TargetRules {
	public ScornEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Scorn",
			"ScornAudioModule",
			"ScornLoadingScreen",
		});
	}
}
