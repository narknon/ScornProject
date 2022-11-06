#include "SaveGameController.h"

void ASaveGameController::SaveSoft() {
}

void ASaveGameController::SaveHard(const bool& IsAct, const FText& SaveName, const FString& SaveNameSuffix) {
}

void ASaveGameController::SaveCheckpoint(const bool& IsAct, const FText& CheckpointName, const FString& SaveNameSuffix) {
}

void ASaveGameController::LoadLatSave() {
}

void ASaveGameController::LoadHardSave(int32 SaveIndex) {
}

bool ASaveGameController::IsSoftSavingAllowed() {
    return false;
}

bool ASaveGameController::IsHardSavingAllowed() {
    return false;
}

bool ASaveGameController::IsAlreadySaved(int32 SaveIndex) {
    return false;
}

void ASaveGameController::InvalidateSoftSave() {
}

bool ASaveGameController::GetMostRecentHardSaveIndex(int32& OutSaveIndex) {
    return false;
}

void ASaveGameController::ClearSaveData() {
}

ASaveGameController::ASaveGameController() {
    this->bIsCharacterDead = false;
}

