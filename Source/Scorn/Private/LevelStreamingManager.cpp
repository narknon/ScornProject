#include "LevelStreamingManager.h"

void ALevelStreamingManager::UnpauseStreaming() {
}

void ALevelStreamingManager::StreamLevels(const EStreamingActionType& StreamingAction, bool Force) {
}

bool ALevelStreamingManager::ShouldPrintDebugInfoOnScreen() {
    return false;
}

void ALevelStreamingManager::ScanLevelDependencies() {
}

void ALevelStreamingManager::PauseStreaming() {
}

void ALevelStreamingManager::OnLevelUnloaded() {
}

void ALevelStreamingManager::OnLevelShown() {
}

void ALevelStreamingManager::OnLevelLoaded() {
}

void ALevelStreamingManager::OnLevelHidden() {
}

void ALevelStreamingManager::LogScannedAssets() {
}

FString ALevelStreamingManager::GetCurrentStreamingStatus() {
    return TEXT("");
}

ALevelStreamingManager::ALevelStreamingManager() {
    this->bShouldBeLoaded = false;
    this->LevelsToStreamDataAsset = NULL;
    this->State = ELevelStreamingManagerState::Idle_StreamedOut;
}

