#pragma once
#include "CoreMinimal.h"
#include "FMODBlueprintStatics.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EFMODEventPlaybackState.h"
#include "AttenuationRange.h"
#include "AudioBusData.h"
#include "ScornAudioBlueprintsStatics.generated.h"

class UScornAudioBanksDataAsset;
class USceneComponent;
class UObject;
class UFMODBank;
class UFMODBus;
class UFMODAudioComponent;
class UFMODEvent;

UCLASS(Blueprintable)
class SCORNAUDIOMODULE_API UScornAudioBlueprintsStatics : public UFMODBlueprintStatics {
    GENERATED_BODY()
public:
    UScornAudioBlueprintsStatics();
    UFUNCTION(BlueprintCallable)
    static void ScornAudioUnloadBanksByString(TArray<FString> Banks);
    
    UFUNCTION(BlueprintCallable)
    static void ScornAudioUnloadBanksByDataAsset(UScornAudioBanksDataAsset* DataAsset);
    
    UFUNCTION(BlueprintCallable)
    static void ScornAudioUnloadBanks(TArray<UFMODBank*> Banks);
    
    UFUNCTION(BlueprintCallable)
    static void ScornAudioUnloadBankByString(const FString& BankName, bool& bSouccess);
    
    UFUNCTION(BlueprintCallable)
    static void ScornAudioUnloadBank(UFMODBank* Bank);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFMODAudioComponent* ScornAudioPlayEventAttached(UObject* WorldContextObject, UFMODEvent* Event, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FFMODEventInstance ScornAudioPlayEventAtLocation(UObject* WorldContextObject, UFMODEvent* Event, const FTransform& Location, bool bAutoPlay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FFMODEventInstance ScornAudioPlayEvent2D(UObject* WorldContextObject, UFMODEvent* Event, bool bAutoPlay);
    
public:
    UFUNCTION(BlueprintCallable)
    static void ScornAudioLoadBanksByDataAsset(UScornAudioBanksDataAsset* DataAsset, bool LoadSampleData);
    
    UFUNCTION(BlueprintCallable)
    static void ScornAudioLoadBanks(TArray<UFMODBank*> Banks, bool LoadSampleData);
    
    UFUNCTION(BlueprintCallable)
    static void ScornAudioLoadBankByString(const FString& BankName, bool bBlocking, bool bLoadSampleData, bool& bSouccess);
    
    UFUNCTION(BlueprintCallable)
    static void ScornAudioLoadBank(UFMODBank* Bank, bool LoadSampleData);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ScornAudioEventInstancePlay(UObject* WorldContextObject, FFMODEventInstance EventInstance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConsoleLoggingEnabled();
    
    UFUNCTION(BlueprintCallable)
    static EFMODEventPlaybackState GetFMODEventInstancePlaybackState(FFMODEventInstance EventInstance);
    
    UFUNCTION(BlueprintCallable)
    static float GetFMODAttenuation(const FVector& inAuditorLocation, const FVector& inListenerLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAttenuationRange GetEventAttenuationRange(UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAudioBusData GetBusInfo(UFMODBus* Bus);
    
    UFUNCTION(BlueprintCallable)
    static void GetAudioComponentVolume(UFMODAudioComponent* Component, float& Volume);
    
    UFUNCTION(BlueprintCallable)
    static EFMODEventPlaybackState GetAudioComponentPlaybackState(UFMODAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable)
    static void GetAudioComponentEventName(UFMODAudioComponent* Component, FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EventIs3D(UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    static bool EventGetVolume(UFMODEvent* Event, float& outVolume);
    
    UFUNCTION(BlueprintCallable)
    static void EnableComponentTimelineCallback(UFMODAudioComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static float DbToLinear(float dB);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertToFMODAttenuation(const float& InValue);
    
};

