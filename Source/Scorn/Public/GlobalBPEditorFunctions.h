#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/MeshMerging.h"
#include "UObject/NoExportTypes.h"
#include "GlobalBPEditorFunctions.generated.h"

class UObject;
class UStaticMeshComponent;
class AActor;
class UStaticMesh;

UCLASS(Blueprintable)
class SCORN_API UGlobalBPEditorFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalBPEditorFunctions();
    UFUNCTION(BlueprintCallable)
    static bool UpdateImportPathIfNotValid(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    static void ShowOnScreenDialogMessage(TArray<FString> Message, const FString& Title);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseAsOccluder(UStaticMeshComponent* StaticMeshComponent, bool UseAsOccluder);
    
    UFUNCTION(BlueprintCallable)
    static void SetStaticMeshLODInfo(UStaticMesh* StaticMesh, int32 LOD, int32 OldIndex, int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetPivotOffsetForActor(AActor* Actor, FVector PivotOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetLODReductionSettings(UStaticMesh* Mesh, int32 SourceModel, TEnumAsByte<EMeshFeatureImportance::Type> Silhouette, TEnumAsByte<EMeshFeatureImportance::Type> Shading, TEnumAsByte<EMeshFeatureImportance::Type> Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetLODGroup(UStaticMesh* Mesh, FName LODGroup);
    
    UFUNCTION(BlueprintCallable)
    static void SetLodDetails(UStaticMesh* Mesh, int32 LODCount, TArray<float> ScreenSizes, TArray<float> PercentTriangles, TArray<float> PixelErrors);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLightmapResolutionForStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32 Resolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetCastDynamicShadow(UStaticMeshComponent* StaticMeshComponent, bool bCastDynamicShadowValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBuildScaleSettings(UStaticMesh* Mesh, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    static bool SetActorRootComponentHiddenInGame(AActor* Actor, bool HiddenInGame);
    
    UFUNCTION(BlueprintCallable)
    static void SaveStringArrayToFile(TArray<FString> ArrayToSave);
    
    UFUNCTION(BlueprintCallable)
    static bool MarkObjectAsDirty(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinLightmapResolutionForLOD0(UStaticMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckIfImportPathIsValid(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    static void BatchUpdateImportPathIfNotValid(TArray<UObject*> Assets, const FString& SystemSearchPath);
    
};

