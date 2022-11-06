#include "AudioEventInstanceData.h"

FAudioEventInstanceData::FAudioEventInstanceData() {
    this->Distance = 0.00f;
    this->IsSnapshot = false;
    this->is3D = false;
    this->PlayBackState = EFMODEventPlaybackState::UNDEFINED;
}

