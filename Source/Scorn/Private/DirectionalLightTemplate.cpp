#include "DirectionalLightTemplate.h"
#include "Components/DirectionalLightComponent.h"

FDirectionalLightKeyProps ADirectionalLightTemplate::GetOverridableProperties() {
    return FDirectionalLightKeyProps{};
}

ADirectionalLightTemplate::ADirectionalLightTemplate() {
    this->DirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLightComponent"));
}

