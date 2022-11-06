#pragma once
#include "CoreMinimal.h"
#include "DirectionalLightKeyProps.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "ELoadingScreenType.h"
#include "SkyLightKeyProps.h"
#include "ExponentialHeightFogKeyProps.h"
#include "FMODBlueprintStatics.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GlobalBPFunctions.generated.h"

class USceneComponent;
class UEnum;
class UExponentialHeightFogComponent;
class UObject;
class ULevelStreaming;
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
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class SCORN_API UGlobalBPFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalBPFunctions();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateFOV(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool UnblockSaving(UObject* Requester, bool Force);
    
    UFUNCTION(BlueprintCallable)
    static void TerminateActor(AActor* ActorToTerminate);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchMonitors(bool IsPrimary);
    
    UFUNCTION(BlueprintCallable)
    static int32 StringToEnum(TSoftObjectPtr<UEnum> EnumPtr, const FString& StringToConvert);
    
    UFUNCTION(BlueprintCallable)
    static void String_Sort(UPARAM(Ref) TArray<FString>& Array_To_Sort, bool Descending, TArray<FString>& Sorted_Array);
    
    UFUNCTION(BlueprintCallable)
    static float SmoothFloatValueMA(const float& ValueToSmooth, UPARAM(Ref) TArray<float>& SampleArray, bool PrintResult, const FString& ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static float SmoothFloatValueEMA(const float& ValueToSmooth, int32 EMASmoothingPeriod, float EMAPreviousValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkylightLowerHemisphere(USkyLightComponent* SkyLightComponent, bool isSolidColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetMinDrawDistance(UPrimitiveComponent* PrimitiveComponent, float MinDrawDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightmapResolution(UStaticMesh* Asset, int32 Resolution, bool ForcePowerOfTwo, bool LogChanges);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightingChannels(UPrimitiveComponent* Component, const FLightingChannels& newLightingChannels);
    
    UFUNCTION(BlueprintCallable)
    static void SelectActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FString ReplaceNewLineWithWhitespace(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void RenameActor(AActor* Actor, const FString& NewName, bool bMakeDirty);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAllDynamicSubLevels(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PurgeSavableActorsCollection();
    
    UFUNCTION(BlueprintCallable)
    static void OpenScornLevel(UObject* ContextObject, const FName MapName, UFMODEvent* Event, TEnumAsByte<ELoadingScreenType> LoadingScreenType, bool bCachePlayerState, bool bIsNewGame);
    
    UFUNCTION(BlueprintCallable)
    static FSkyLightKeyProps LerpSkylight(float Alpha, FSkyLightKeyProps A, FSkyLightKeyProps B);
    
    UFUNCTION(BlueprintCallable)
    static FExponentialHeightFogKeyProps Lerp(float Alpha, FExponentialHeightFogKeyProps A, FExponentialHeightFogKeyProps B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSimulateInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSavingBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformXSX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformWindows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatform_WinGDK_Or_Xbox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCheatingEnabled();
    
    UFUNCTION(BlueprintCallable)
    static void Integer_Sort(UPARAM(Ref) TArray<int32>& Array_To_Sort, bool Descending, TArray<int32>& Sorted_Array);
    
    UFUNCTION(BlueprintCallable)
    static FSkyLightKeyProps GetSkylightOverridableProperties(USkyLightComponent* SkyLightComponent);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSaveBlocker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSoftObjectPtr<UWorld> GetPersistentLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPercentageChance(const float Chance);
    
    UFUNCTION(BlueprintCallable)
    static FExponentialHeightFogKeyProps GetOverridableProperties(UExponentialHeightFogComponent* FogComponent);
    
    UFUNCTION(BlueprintCallable)
    static void GetObjectReferenceCount(UObject* Obj, TArray<UObject*>& OutReferredToObjects);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaterialInterfaceStaticSwitchValue(UMaterialInterface* Material, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaterialInstanceStaticSwitchValue(UMaterialInstance* Material, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLightmapResolution(UStaticMesh* Asset);
    
    UFUNCTION(BlueprintCallable)
    static UAbstractItemFactory* GetItemFactory(UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    static void GetFormattedTimeFromTimeInSeconds(const int32& InTimeInSeconds, int32& OutHours, int32& OutMinutes, int32& OutSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFloatAsTextWithPrecision(float TheFloat, int32 Precision, bool IncludeLeadingZero);
    
    UFUNCTION(BlueprintCallable)
    static float GetDirectionAngleVectorToVector(const FVector& ForwardVector, const FVector& RightVector, const FVector& StartVector, const FVector& TargetVector);
    
    UFUNCTION(BlueprintCallable)
    static float GetDirectionAngleTwoActors(AActor* Origin, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static float GetDirectionAngleComponentToVector(USceneComponent* Component, FVector Vector);
    
    UFUNCTION(BlueprintCallable)
    static float GetDirectionAngleActorToVector(AActor* Actor, FVector Vector);
    
    UFUNCTION(BlueprintCallable)
    static FDirectionalLightKeyProps GetDirectionalLightOverridableProperties(UDirectionalLightComponent* DirectionalLightComponent);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCommandLineArgumentValue(const FString& ArgumentName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetClosestActorToPoint(const TArray<AActor*>& Actors, const FVector& ReferencePoint);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAspectRatio(int32 TargetWidth, int32 TargetHeight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevelStreaming*> GetAllSublevels(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ForceDestroyObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void ForceConstruction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void Float_Sort(UPARAM(Ref) TArray<float>& Array_To_Sort, bool Descending, TArray<float>& Sorted_Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesEventInstanceHaveParameter(FFMODEventInstance EventInstance, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckForCommandLineArgument(const FString& ArgumentName);
    
    UFUNCTION(BlueprintCallable)
    static bool BlockSaving(UObject* Requester);
    
    UFUNCTION(BlueprintCallable)
    static FString AddTrailingZeroIfNeeded(const int32& Number);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* AddLevelToPersistent(UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, const FVector Location, const FRotator Rotation, bool& bOutSuccess);
    
};

