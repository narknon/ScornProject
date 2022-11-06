#include "BaseAudioManager.h"

class ABaseMusicMananger;


ABaseMusicMananger* ABaseAudioManager::GetMusicManager() const {
    return NULL;
}

TArray<FString> ABaseAudioManager::GetCurrentBanksLoaded() const {
    return TArray<FString>();
}

ABaseAudioManager::ABaseAudioManager() {
    this->MusicManagerClass = NULL;
    this->MusicManager = NULL;
    this->LastOverlappedTrigger = NULL;
}

