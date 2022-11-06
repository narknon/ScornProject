#include "SubstanceUtility.h"

class USubstanceGraphInstance;
class UTexture2D;
class UMaterialInterface;
class UObject;
class UMaterial;
class USubstanceInstanceFactory;

void USubstanceUtility::SyncRendering(USubstanceGraphInstance* InstancesToRender) {
}

void USubstanceUtility::SetGraphInstanceOutputSizeInt(USubstanceGraphInstance* GraphInstance, int32 Width, int32 Height) {
}

void USubstanceUtility::SetGraphInstanceOutputSize(USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height) {
}

void USubstanceUtility::ResetInputParameters(USubstanceGraphInstance* GraphInstance) {
}

TArray<UTexture2D*> USubstanceUtility::GetSubstanceTextures(USubstanceGraphInstance* GraphInstance) {
    return TArray<UTexture2D*>();
}

TArray<USubstanceGraphInstance*> USubstanceUtility::GetSubstances(UMaterialInterface* Material) {
    return TArray<USubstanceGraphInstance*>();
}

float USubstanceUtility::GetSubstanceLoadingProgress() {
    return 0.0f;
}

TArray<UMaterial*> USubstanceUtility::GetSubstanceIncludedMaterials() {
    return TArray<UMaterial*>();
}

FString USubstanceUtility::GetGraphName(USubstanceGraphInstance* GraphInstance) {
    return TEXT("");
}

FString USubstanceUtility::GetFactoryName(USubstanceGraphInstance* GraphInstance) {
    return TEXT("");
}

void USubstanceUtility::EnableInstanceOutputs(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance, TArray<int32> OutputIndices) {
}

USubstanceGraphInstance* USubstanceUtility::DuplicateGraphInstance(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance) {
    return NULL;
}

void USubstanceUtility::DisableInstanceOutputs(UObject* WorldContextObject, USubstanceGraphInstance* GraphInstance, TArray<int32> OutputIndices) {
}

USubstanceGraphInstance* USubstanceUtility::CreateGraphInstance(UObject* WorldContextObject, USubstanceInstanceFactory* Factory, int32 GraphDescIndex, UMaterial* ParentMaterial, const FString& InstanceName) {
    return NULL;
}

USubstanceInstanceFactory* USubstanceUtility::CreateAggregateSubstanceFactory(USubstanceInstanceFactory* OutputFactory, int32 OutputFactoryGraphIndex, USubstanceInstanceFactory* InputFactory, int32 InputFactoryGraphIndex, const TArray<FSubstanceConnection>& Connections) {
    return NULL;
}

void USubstanceUtility::CopyInputParameters(USubstanceGraphInstance* SourceGraphInstance, USubstanceGraphInstance* DestGraphInstance) {
}

void USubstanceUtility::ClearCache() {
}

void USubstanceUtility::AsyncRendering(USubstanceGraphInstance* InstancesToRender) {
}

USubstanceUtility::USubstanceUtility() {
}

