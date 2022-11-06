#include "ScornAudioMonitorSubsystem.h"

void UScornAudioMonitorSubsystem::UnloadAllBanks(TArray<FString> SkipBanks) {
}

void UScornAudioMonitorSubsystem::SetVcaVolumeByName(const FString& inVcaName, float inVolume) {
}

void UScornAudioMonitorSubsystem::SetBusVolumeByName(const FString& inBusName, float inBusVolume) {
}

void UScornAudioMonitorSubsystem::Reset() {
}

FAudioVCAData UScornAudioMonitorSubsystem::GetVCADataByName(const FString& inVcaName) {
    return FAudioVCAData{};
}

FAudioZoneTriggerData UScornAudioMonitorSubsystem::GetTriggerDataByName(const FString& Name) {
    return FAudioZoneTriggerData{};
}

TArray<FString> UScornAudioMonitorSubsystem::GetOverlappedTriggersNames() {
    return TArray<FString>();
}

int32 UScornAudioMonitorSubsystem::GetLoadedBanksCount() {
    return 0;
}

TArray<FString> UScornAudioMonitorSubsystem::GetLoadedBanksCleanNames() {
    return TArray<FString>();
}

FAudioEventInstanceData UScornAudioMonitorSubsystem::GetEventInstancesDataByName(const FString& inName) {
    return FAudioEventInstanceData{};
}

FAudioBusData UScornAudioMonitorSubsystem::GetBusDataByPath(const FString& BusPath) {
    return FAudioBusData{};
}

EBankStatus UScornAudioMonitorSubsystem::GetBankStatusByString(const FString& inName) {
    return EBankStatus::Loaded;
}

ESampleDataStatus UScornAudioMonitorSubsystem::GetBankSampleStatusByString(const FString& Name) {
    return ESampleDataStatus::Unloading;
}

TArray<FString> UScornAudioMonitorSubsystem::GetAllVCANames() {
    return TArray<FString>();
}

TArray<FAudioVCAData> UScornAudioMonitorSubsystem::GetAllVCAData() {
    return TArray<FAudioVCAData>();
}

TArray<FAudioZoneTriggerData> UScornAudioMonitorSubsystem::GetAllOverlappedTriggersData() {
    return TArray<FAudioZoneTriggerData>();
}

TArray<FString> UScornAudioMonitorSubsystem::GetAllMusicManagerMainEventNames() {
    return TArray<FString>();
}

TArray<FAudioEventInstanceData> UScornAudioMonitorSubsystem::GetAllMusicManagerMainEventData() {
    return TArray<FAudioEventInstanceData>();
}

TArray<FString> UScornAudioMonitorSubsystem::GetAllEventInstancesDataPlayingNames() {
    return TArray<FString>();
}

TArray<FAudioEventInstanceData> UScornAudioMonitorSubsystem::GetAllEventInstancesDataPlaying() {
    return TArray<FAudioEventInstanceData>();
}

TArray<FString> UScornAudioMonitorSubsystem::GetAllEventInstancesDataMemoryNames() {
    return TArray<FString>();
}

TArray<FAudioEventInstanceData> UScornAudioMonitorSubsystem::GetAllEventInstancesDataMemory() {
    return TArray<FAudioEventInstanceData>();
}

TArray<FString> UScornAudioMonitorSubsystem::GetAllBusesNames() {
    return TArray<FString>();
}

TArray<FAudioBusData> UScornAudioMonitorSubsystem::GetAllBusesData() {
    return TArray<FAudioBusData>();
}

int32 UScornAudioMonitorSubsystem::GetAllBanksCount() {
    return 0;
}

TArray<FString> UScornAudioMonitorSubsystem::GetAllBanksCleanNames() {
    return TArray<FString>();
}

void UScornAudioMonitorSubsystem::DisplayZoneTriggers(bool bDebug) {
}

void UScornAudioMonitorSubsystem::DisplayMusicManagerTriggers(bool Debug) {
}

void UScornAudioMonitorSubsystem::DebugAllNPC(bool Debug) {
}

void UScornAudioMonitorSubsystem::Activate_Implementation(EScornAudioMonitorMode Mode) {
}

UScornAudioMonitorSubsystem::UScornAudioMonitorSubsystem() {
    this->Settings = NULL;
    this->CurrentMode = EScornAudioMonitorMode::None;
    this->CurrentWidget = NULL;
}

