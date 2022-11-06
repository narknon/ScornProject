#include "ScornAudioBlueprintsStatics.h"

class UScornAudioBanksDataAsset;
class USceneComponent;
class UObject;
class UFMODBank;
class UFMODEvent;
class UFMODBus;
class UFMODAudioComponent;

void UScornAudioBlueprintsStatics::ScornAudioUnloadBanksByString(TArray<FString> Banks) {
}

void UScornAudioBlueprintsStatics::ScornAudioUnloadBanksByDataAsset(UScornAudioBanksDataAsset* DataAsset) {
}

void UScornAudioBlueprintsStatics::ScornAudioUnloadBanks(TArray<UFMODBank*> Banks) {
}

void UScornAudioBlueprintsStatics::ScornAudioUnloadBankByString(const FString& BankName, bool& bSouccess) {
}

void UScornAudioBlueprintsStatics::ScornAudioUnloadBank(UFMODBank* Bank) {
}

UFMODAudioComponent* UScornAudioBlueprintsStatics::ScornAudioPlayEventAttached(UObject* WorldContextObject, UFMODEvent* Event, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy) {
    return NULL;
}

FFMODEventInstance UScornAudioBlueprintsStatics::ScornAudioPlayEventAtLocation(UObject* WorldContextObject, UFMODEvent* Event, const FTransform& Location, bool bAutoPlay) {
    return FFMODEventInstance{};
}

FFMODEventInstance UScornAudioBlueprintsStatics::ScornAudioPlayEvent2D(UObject* WorldContextObject, UFMODEvent* Event, bool bAutoPlay) {
    return FFMODEventInstance{};
}

void UScornAudioBlueprintsStatics::ScornAudioLoadBanksByDataAsset(UScornAudioBanksDataAsset* DataAsset, bool LoadSampleData) {
}

void UScornAudioBlueprintsStatics::ScornAudioLoadBanks(TArray<UFMODBank*> Banks, bool LoadSampleData) {
}

void UScornAudioBlueprintsStatics::ScornAudioLoadBankByString(const FString& BankName, bool bBlocking, bool bLoadSampleData, bool& bSouccess) {
}

void UScornAudioBlueprintsStatics::ScornAudioLoadBank(UFMODBank* Bank, bool LoadSampleData) {
}

void UScornAudioBlueprintsStatics::ScornAudioEventInstancePlay(UObject* WorldContextObject, FFMODEventInstance EventInstance) {
}

bool UScornAudioBlueprintsStatics::IsConsoleLoggingEnabled() {
    return false;
}

EFMODEventPlaybackState UScornAudioBlueprintsStatics::GetFMODEventInstancePlaybackState(FFMODEventInstance EventInstance) {
    return EFMODEventPlaybackState::UNDEFINED;
}

float UScornAudioBlueprintsStatics::GetFMODAttenuation(const FVector& inAuditorLocation, const FVector& inListenerLocation) {
    return 0.0f;
}

FAttenuationRange UScornAudioBlueprintsStatics::GetEventAttenuationRange(UFMODEvent* Event) {
    return FAttenuationRange{};
}

FAudioBusData UScornAudioBlueprintsStatics::GetBusInfo(UFMODBus* Bus) {
    return FAudioBusData{};
}

void UScornAudioBlueprintsStatics::GetAudioComponentVolume(UFMODAudioComponent* Component, float& Volume) {
}

EFMODEventPlaybackState UScornAudioBlueprintsStatics::GetAudioComponentPlaybackState(UFMODAudioComponent* AudioComponent) {
    return EFMODEventPlaybackState::UNDEFINED;
}

void UScornAudioBlueprintsStatics::GetAudioComponentEventName(UFMODAudioComponent* Component, FString& Name) {
}

bool UScornAudioBlueprintsStatics::EventIs3D(UFMODEvent* Event) {
    return false;
}

bool UScornAudioBlueprintsStatics::EventGetVolume(UFMODEvent* Event, float& outVolume) {
    return false;
}

void UScornAudioBlueprintsStatics::EnableComponentTimelineCallback(UFMODAudioComponent* Component) {
}

float UScornAudioBlueprintsStatics::DbToLinear(float dB) {
    return 0.0f;
}

float UScornAudioBlueprintsStatics::ConvertToFMODAttenuation(const float& InValue) {
    return 0.0f;
}

UScornAudioBlueprintsStatics::UScornAudioBlueprintsStatics() {
}

