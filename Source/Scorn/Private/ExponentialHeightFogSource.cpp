#include "ExponentialHeightFogSource.h"
#include "SavableExponentialFogComponent.h"

class AExponentialHeightFogTemplate;

void AExponentialHeightFogSource::SetFogHeightFalloffProps(float PrimaryValue, float SecondaryValue, float StaticLightScattering) {
}

void AExponentialHeightFogSource::SetDefaults() {
}

FString AExponentialHeightFogSource::GetCurrentState() {
    return TEXT("");
}

void AExponentialHeightFogSource::ApplyProperties(const FExponentialHeightFogKeyProps& inProperties, bool bSetLocation, bool bSkipFogFalloff) {
}

void AExponentialHeightFogSource::AnimateTemplates(TArray<AExponentialHeightFogTemplate*> ExpoTemplates) {
}

AExponentialHeightFogSource::AExponentialHeightFogSource() {
    this->ExponentialComponent = CreateDefaultSubobject<USavableExponentialFogComponent>(TEXT("SavableExponentialHeightFogComponent"));
}

