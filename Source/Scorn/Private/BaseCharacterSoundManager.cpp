#include "BaseCharacterSoundManager.h"

class UFMODAudioComponent;


void UBaseCharacterSoundManager::SetSoundManagerEnabled(bool NewEnabled) {
}

void UBaseCharacterSoundManager::SetOcclusion(FVector Location, float occlusion, float Angle, FName OcclusionParamName, FName PointAngleParamName) {
}

void UBaseCharacterSoundManager::SetAreConditionsMet(bool InAreConditionsMet) {
}













bool UBaseCharacterSoundManager::isUFMODAudioComponentNotNull(UFMODAudioComponent* comp) {
    return false;
}

bool UBaseCharacterSoundManager::GetSoundManagerEnabled() {
    return false;
}

bool UBaseCharacterSoundManager::GetAreConditionsMet() {
    return false;
}

UBaseCharacterSoundManager::UBaseCharacterSoundManager() {
    this->DebugManager = false;
    this->AnimNotifyEvent = NULL;
    this->MainAudioComponentRef_Debug = NULL;
    this->ScornSoundPropaginationComponentRef_Debug = NULL;
}

