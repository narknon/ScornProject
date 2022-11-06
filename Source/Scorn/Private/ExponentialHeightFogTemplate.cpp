#include "ExponentialHeightFogTemplate.h"
#include "Components/ExponentialHeightFogComponent.h"

void AExponentialHeightFogTemplate::SetOverrideLightColors(UExponentialHeightFogComponent* SourceExponentialFog) {
}

FExponentialHeightFogKeyProps AExponentialHeightFogTemplate::GetOverridableProperties() {
    return FExponentialHeightFogKeyProps{};
}

AExponentialHeightFogTemplate::AExponentialHeightFogTemplate() {
    this->ExponentialFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ExponentialHeightFogComponent"));
}

