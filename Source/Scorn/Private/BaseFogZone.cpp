#include "BaseFogZone.h"

FSkyLightSources ABaseFogZone::GetSkylightSources() {
    return FSkyLightSources{};
}

FFogSources ABaseFogZone::GetFogSources() {
    return FFogSources{};
}

FDirectionalLightSources ABaseFogZone::GetDirectionalLightSources() {
    return FDirectionalLightSources{};
}


void ABaseFogZone::Animate() {
}

ABaseFogZone::ABaseFogZone() {
}

