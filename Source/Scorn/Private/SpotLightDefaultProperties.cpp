#include "SpotLightDefaultProperties.h"

FSpotLightDefaultProperties::FSpotLightDefaultProperties() {
    this->CastShadows = false;
    this->IntensityUnits = ELightUnits::Unitless;
    this->UseInverseSquaredFalloff = false;
    this->CastVolumetricShadow = false;
    this->MaxDrawDistance = 0.00f;
    this->MaxDistanceFadeRange = 0.00f;
    this->Channel0 = false;
    this->Channel1 = false;
    this->Channel2 = false;
}

