#include "AbstractScornGameMode.h"
#include "Templates/SubclassOf.h"

class ASaveGameController;
class AActor;
class ASkylightSource;
class AGlobalStreamingManager;
class UAbstractItemFactory;
class AExponentialHeightFogSource;
class ABaseAudioManager;
class ADirectionalLightSource;

void AAbstractScornGameMode::SetEnableTextureStreamingObserver(const bool& Enable) {
}

void AAbstractScornGameMode::ScornVFX_Debug_Exponential_Fog_Boxes() {
}

void AAbstractScornGameMode::ScornVFX_Debug_Exponential_Fog() {
}

void AAbstractScornGameMode::ScornSettings_DebugInput() const {
}

void AAbstractScornGameMode::ScornAudio_MusicManager_Stop() {
}

void AAbstractScornGameMode::ScornAudio_MusicManager_SetState(const float& State) {
}

void AAbstractScornGameMode::ReloadSaveSystemPreferences() {
}

void AAbstractScornGameMode::RefreshActorSwitching() {
}

void AAbstractScornGameMode::HandleSectionLevelsLoaded() {
}

ASkylightSource* AAbstractScornGameMode::GetSkylightSource() const {
    return NULL;
}

AActor* AAbstractScornGameMode::GetSIECamera() const {
    return NULL;
}

ASaveGameController* AAbstractScornGameMode::GetSaveGameController() const {
    return NULL;
}

bool AAbstractScornGameMode::GetIsTextureStreamingObserverEnabled() {
    return false;
}

AGlobalStreamingManager* AAbstractScornGameMode::GetGlobalStreamingManager() {
    return NULL;
}

AExponentialHeightFogSource* AAbstractScornGameMode::GetExponentialFogSource() const {
    return NULL;
}

ADirectionalLightSource* AAbstractScornGameMode::GetDirectionalLightSource() const {
    return NULL;
}

TSubclassOf<UAbstractItemFactory> AAbstractScornGameMode::GetConcreteItemFactoryClass() const {
    return NULL;
}

ABaseAudioManager* AAbstractScornGameMode::GetAudioManager() const {
    return NULL;
}

void AAbstractScornGameMode::ForceGarbageCollection() {
}

AAbstractScornGameMode::AAbstractScornGameMode() {
    this->SIECameraDebugClass = NULL;
    this->SIECamera = NULL;
    this->AudioManager = NULL;
    this->ConcreteItemFactory = NULL;
    this->SaveGameController = NULL;
    this->AudioManagerClass = NULL;
    this->SaveGameControllerClass = NULL;
    this->ExponentialHeightFogSource = NULL;
    this->SkylightSource = NULL;
    this->DirectionalLightSource = NULL;
    this->TextureStreamingBlockCallTimeLimit = 0.00f;
    this->TextureStreamingObserverCycleTime = 0.00f;
    this->TextureStreamingObserverMaxTime = 0.00f;
    this->FogSystemEnabled = true;
    this->FogSystemDebugEnabled = false;
}

