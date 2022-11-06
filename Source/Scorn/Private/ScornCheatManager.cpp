#include "ScornCheatManager.h"

void UScornCheatManager::UpdateCullingVolumes() {
}

void UScornCheatManager::ToggleGlobalEventsDebugMode() {
}

void UScornCheatManager::TeleportToScornPresent() {
}

void UScornCheatManager::TeleportPlayer(const FString& TeleportLocationName) {
}


void UScornCheatManager::ShowMistPlanes(const bool& Show) {
}



void UScornCheatManager::SetCanSelectGamePreset(bool CanSelect) {
}


void UScornCheatManager::ScornGameplayTriggerWorldEvent(uint8 WorldEvent) {
}

void UScornCheatManager::ScornGameplayStopWorldEvent(uint8 WorldEvent) {
}

void UScornCheatManager::ScornGameplaySpawnActor(const FString& ActorClass, float Distance) {
}

void UScornCheatManager::ScornGameplayReloadMCJsonSettings() {
}

void UScornCheatManager::ScornGameplayPrintMCDebugReport() {
}

void UScornCheatManager::ScornGameplayHurtMC(const float& Damage) {
}

void UScornCheatManager::ScornGameplayGodMode(bool Enable) {
}

void UScornCheatManager::ScornGameplayAIDebugReport() {
}

void UScornCheatManager::QaSnapshot() {
}

bool UScornCheatManager::QaResetAchievements() {
    return false;
}



void UScornCheatManager::PrintTeleportLocations() {
}

void UScornCheatManager::LogWorldEvents() {
}

void UScornCheatManager::LogTeleportLocations() {
}

void UScornCheatManager::LogGlobalEvents() {
}












void UScornCheatManager::ForceGarbageCollection() {
}

void UScornCheatManager::ExecuteCommandTemplate(int32 Index) {
}

void UScornCheatManager::DebugSwitchedOnNPCs(const bool& Debug) {
}


void UScornCheatManager::DebugNametable() {
}

void UScornCheatManager::DebugLevelStreaming(const bool& Debug) {
}

void UScornCheatManager::DebugLevelSectionSwitching(const bool& Debug) {
}

void UScornCheatManager::DebugAI() {
}

void UScornCheatManager::DebugActorSwitching(const bool& Debug) {
}

void UScornCheatManager::Debug3dNavStaticCells() {
}

void UScornCheatManager::Debug3dNavDynamicCells() {
}

void UScornCheatManager::AudioSnapshot() {
}

UScornCheatManager::UScornCheatManager() {
    this->bDebugSoapp = false;
    this->bDebugDynamicLights = false;
    this->bDebugActorSwitching = false;
    this->bDebugLevelStreaming = false;
    this->bDebugDynamicCells = false;
    this->bDebugStaticCells = false;
    this->TeleportListWidgetClass = NULL;
}

