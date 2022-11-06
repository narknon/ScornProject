#include "SkyLightTemplate.h"
#include "Components/SkyLightComponent.h"

FSkyLightKeyProps ASkyLightTemplate::GetOverridableProperties() {
    return FSkyLightKeyProps{};
}

ASkyLightTemplate::ASkyLightTemplate() {
    this->SkyLightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent"));
}

