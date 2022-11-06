#include "DirectionalLightKeyProps.h"

FDirectionalLightKeyProps::FDirectionalLightKeyProps() {
    this->SourceAngle = 0.00f;
    this->SourceSoftAngle = 0.00f;
    this->Temperature = 0.00f;
    this->bUseTemperature = false;
    this->bAffectWorld = false;
    this->bCastShadows = false;
    this->IndirectLightingIntensity = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->SpecularScale = 0.00f;
    this->ShadowResolutionScale = 0.00f;
    this->Intensity = 0.00f;
}

