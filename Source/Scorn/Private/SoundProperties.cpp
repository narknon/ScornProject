#include "SoundProperties.h"

FSoundProperties::FSoundProperties() {
    this->Volume = 0.00f;
    this->Pitch = 0.00f;
    this->HighFrequencyGainMultiplier = 0.00f;
    this->allowPitch = false;
    this->allowLowPass = false;
    this->allowCustomParameters = false;
}

