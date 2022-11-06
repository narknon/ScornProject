#include "GlobalBPFunctions.h"

class USceneComponent;
class UEnum;
class UExponentialHeightFogComponent;
class UObject;
class UStaticMesh;
class AActor;
class USkyLightComponent;
class UPrimitiveComponent;
class UFMODEvent;
class UWorld;
class UMaterialInterface;
class UMaterialInstance;
class UAbstractItemFactory;
class UDirectionalLightComponent;
class ULevelStreaming;
class ULevelStreamingDynamic;

void UGlobalBPFunctions::UpdateFOV(UObject* WorldContextObject) {
}

bool UGlobalBPFunctions::UnblockSaving(UObject* Requester, bool Force) {
    return false;
}

void UGlobalBPFunctions::TerminateActor(AActor* ActorToTerminate) {
}

void UGlobalBPFunctions::SwitchMonitors(bool IsPrimary) {
}

int32 UGlobalBPFunctions::StringToEnum(TSoftObjectPtr<UEnum> EnumPtr, const FString& StringToConvert) {
    return 0;
}

void UGlobalBPFunctions::String_Sort(TArray<FString>& Array_To_Sort, bool Descending, TArray<FString>& Sorted_Array) {
}

float UGlobalBPFunctions::SmoothFloatValueMA(const float& ValueToSmooth, TArray<float>& SampleArray, bool PrintResult, const FString& ParameterName) {
    return 0.0f;
}

float UGlobalBPFunctions::SmoothFloatValueEMA(const float& ValueToSmooth, int32 EMASmoothingPeriod, float EMAPreviousValue) {
    return 0.0f;
}

void UGlobalBPFunctions::SetSkylightLowerHemisphere(USkyLightComponent* SkyLightComponent, bool isSolidColor) {
}

void UGlobalBPFunctions::SetMinDrawDistance(UPrimitiveComponent* PrimitiveComponent, float MinDrawDistance) {
}

void UGlobalBPFunctions::SetLightmapResolution(UStaticMesh* Asset, int32 Resolution, bool ForcePowerOfTwo, bool LogChanges) {
}

void UGlobalBPFunctions::SetLightingChannels(UPrimitiveComponent* Component, const FLightingChannels& newLightingChannels) {
}

void UGlobalBPFunctions::SelectActor(AActor* Actor) {
}

FString UGlobalBPFunctions::ReplaceNewLineWithWhitespace(const FString& Text) {
    return TEXT("");
}

void UGlobalBPFunctions::RenameActor(AActor* Actor, const FString& NewName, bool bMakeDirty) {
}

void UGlobalBPFunctions::RemoveAllDynamicSubLevels(UObject* WorldContextObject) {
}

void UGlobalBPFunctions::PurgeSavableActorsCollection() {
}

void UGlobalBPFunctions::OpenScornLevel(UObject* ContextObject, const FName MapName, UFMODEvent* Event, TEnumAsByte<ELoadingScreenType> LoadingScreenType, bool bCachePlayerState, bool bIsNewGame) {
}

FSkyLightKeyProps UGlobalBPFunctions::LerpSkylight(float Alpha, FSkyLightKeyProps A, FSkyLightKeyProps B) {
    return FSkyLightKeyProps{};
}

FExponentialHeightFogKeyProps UGlobalBPFunctions::Lerp(float Alpha, FExponentialHeightFogKeyProps A, FExponentialHeightFogKeyProps B) {
    return FExponentialHeightFogKeyProps{};
}

bool UGlobalBPFunctions::IsWithEditor() {
    return false;
}

bool UGlobalBPFunctions::IsSimulateInEditor(UObject* WorldContextObject) {
    return false;
}

bool UGlobalBPFunctions::IsShipping() {
    return false;
}

bool UGlobalBPFunctions::IsSavingBlocked() {
    return false;
}

bool UGlobalBPFunctions::IsPlatformXSX() {
    return false;
}

bool UGlobalBPFunctions::IsPlatformWindows() {
    return false;
}

bool UGlobalBPFunctions::IsPlatform_WinGDK_Or_Xbox() {
    return false;
}

bool UGlobalBPFunctions::IsCheatingEnabled() {
    return false;
}

void UGlobalBPFunctions::Integer_Sort(TArray<int32>& Array_To_Sort, bool Descending, TArray<int32>& Sorted_Array) {
}

FSkyLightKeyProps UGlobalBPFunctions::GetSkylightOverridableProperties(USkyLightComponent* SkyLightComponent) {
    return FSkyLightKeyProps{};
}

FString UGlobalBPFunctions::GetSaveBlocker() {
    return TEXT("");
}

FString UGlobalBPFunctions::GetProjectVersion() {
    return TEXT("");
}

TSoftObjectPtr<UWorld> UGlobalBPFunctions::GetPersistentLevel(UObject* WorldContextObject) {
    return NULL;
}

bool UGlobalBPFunctions::GetPercentageChance(const float Chance) {
    return false;
}

FExponentialHeightFogKeyProps UGlobalBPFunctions::GetOverridableProperties(UExponentialHeightFogComponent* FogComponent) {
    return FExponentialHeightFogKeyProps{};
}

void UGlobalBPFunctions::GetObjectReferenceCount(UObject* Obj, TArray<UObject*>& OutReferredToObjects) {
}

bool UGlobalBPFunctions::GetMaterialInterfaceStaticSwitchValue(UMaterialInterface* Material, FName ParameterName) {
    return false;
}

bool UGlobalBPFunctions::GetMaterialInstanceStaticSwitchValue(UMaterialInstance* Material, FName ParameterName) {
    return false;
}

int32 UGlobalBPFunctions::GetLightmapResolution(UStaticMesh* Asset) {
    return 0;
}

UAbstractItemFactory* UGlobalBPFunctions::GetItemFactory(UObject* Outer) {
    return NULL;
}

void UGlobalBPFunctions::GetFormattedTimeFromTimeInSeconds(const int32& InTimeInSeconds, int32& OutHours, int32& OutMinutes, int32& OutSeconds) {
}

FText UGlobalBPFunctions::GetFloatAsTextWithPrecision(float TheFloat, int32 Precision, bool IncludeLeadingZero) {
    return FText::GetEmpty();
}

float UGlobalBPFunctions::GetDirectionAngleVectorToVector(const FVector& ForwardVector, const FVector& RightVector, const FVector& StartVector, const FVector& TargetVector) {
    return 0.0f;
}

float UGlobalBPFunctions::GetDirectionAngleTwoActors(AActor* Origin, AActor* Target) {
    return 0.0f;
}

float UGlobalBPFunctions::GetDirectionAngleComponentToVector(USceneComponent* Component, FVector Vector) {
    return 0.0f;
}

float UGlobalBPFunctions::GetDirectionAngleActorToVector(AActor* Actor, FVector Vector) {
    return 0.0f;
}

FDirectionalLightKeyProps UGlobalBPFunctions::GetDirectionalLightOverridableProperties(UDirectionalLightComponent* DirectionalLightComponent) {
    return FDirectionalLightKeyProps{};
}

FString UGlobalBPFunctions::GetCommandLineArgumentValue(const FString& ArgumentName) {
    return TEXT("");
}

AActor* UGlobalBPFunctions::GetClosestActorToPoint(const TArray<AActor*>& Actors, const FVector& ReferencePoint) {
    return NULL;
}

int32 UGlobalBPFunctions::GetAspectRatio(int32 TargetWidth, int32 TargetHeight) {
    return 0;
}

TArray<ULevelStreaming*> UGlobalBPFunctions::GetAllSublevels(UObject* WorldContextObject) {
    return TArray<ULevelStreaming*>();
}

void UGlobalBPFunctions::ForceDestroyObject(UObject* Object) {
}

void UGlobalBPFunctions::ForceConstruction(AActor* Actor) {
}

void UGlobalBPFunctions::Float_Sort(TArray<float>& Array_To_Sort, bool Descending, TArray<float>& Sorted_Array) {
}

bool UGlobalBPFunctions::DoesEventInstanceHaveParameter(FFMODEventInstance EventInstance, FName Name) {
    return false;
}

bool UGlobalBPFunctions::CheckForCommandLineArgument(const FString& ArgumentName) {
    return false;
}

bool UGlobalBPFunctions::BlockSaving(UObject* Requester) {
    return false;
}

FString UGlobalBPFunctions::AddTrailingZeroIfNeeded(const int32& Number) {
    return TEXT("");
}

ULevelStreamingDynamic* UGlobalBPFunctions::AddLevelToPersistent(UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, const FVector Location, const FRotator Rotation, bool& bOutSuccess) {
    return NULL;
}

UGlobalBPFunctions::UGlobalBPFunctions() {
}

