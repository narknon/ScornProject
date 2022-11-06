#include "GlobalBPEditorFunctions.h"

class UObject;
class UStaticMeshComponent;
class AActor;
class UStaticMesh;

bool UGlobalBPEditorFunctions::UpdateImportPathIfNotValid(UObject* Asset) {
    return false;
}

void UGlobalBPEditorFunctions::ShowOnScreenDialogMessage(TArray<FString> Message, const FString& Title) {
}

void UGlobalBPEditorFunctions::SetUseAsOccluder(UStaticMeshComponent* StaticMeshComponent, bool UseAsOccluder) {
}

void UGlobalBPEditorFunctions::SetStaticMeshLODInfo(UStaticMesh* StaticMesh, int32 LOD, int32 OldIndex, int32 NewIndex) {
}

void UGlobalBPEditorFunctions::SetPivotOffsetForActor(AActor* Actor, FVector PivotOffset) {
}

void UGlobalBPEditorFunctions::SetLODReductionSettings(UStaticMesh* Mesh, int32 SourceModel, TEnumAsByte<EMeshFeatureImportance::Type> Silhouette, TEnumAsByte<EMeshFeatureImportance::Type> Shading, TEnumAsByte<EMeshFeatureImportance::Type> Texture) {
}

void UGlobalBPEditorFunctions::SetLODGroup(UStaticMesh* Mesh, FName LODGroup) {
}

void UGlobalBPEditorFunctions::SetLodDetails(UStaticMesh* Mesh, int32 LODCount, TArray<float> ScreenSizes, TArray<float> PercentTriangles, TArray<float> PixelErrors) {
}

bool UGlobalBPEditorFunctions::SetLightmapResolutionForStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32 Resolution) {
    return false;
}

void UGlobalBPEditorFunctions::SetCastDynamicShadow(UStaticMeshComponent* StaticMeshComponent, bool bCastDynamicShadowValue) {
}

void UGlobalBPEditorFunctions::SetBuildScaleSettings(UStaticMesh* Mesh, FVector Scale) {
}

bool UGlobalBPEditorFunctions::SetActorRootComponentHiddenInGame(AActor* Actor, bool HiddenInGame) {
    return false;
}

void UGlobalBPEditorFunctions::SaveStringArrayToFile(TArray<FString> ArrayToSave) {
}

bool UGlobalBPEditorFunctions::MarkObjectAsDirty(UObject* Object) {
    return false;
}

int32 UGlobalBPEditorFunctions::GetMinLightmapResolutionForLOD0(UStaticMesh* Mesh) {
    return 0;
}

bool UGlobalBPEditorFunctions::CheckIfImportPathIsValid(UObject* Asset) {
    return false;
}

void UGlobalBPEditorFunctions::BatchUpdateImportPathIfNotValid(TArray<UObject*> Assets, const FString& SystemSearchPath) {
}

UGlobalBPEditorFunctions::UGlobalBPEditorFunctions() {
}

