#include "DirectionalLightSource.h"
#include "SavableDirectionalLightComponent.h"

class ADirectionalLightTemplate;

void ADirectionalLightSource::PrepareSource(const FDirectionalLightKeyProps& inProperties) {
}

void ADirectionalLightSource::ApplyProperties(const FDirectionalLightKeyProps& inProperties, bool bSetLocation) {
}

void ADirectionalLightSource::AnimateTemplates(ADirectionalLightTemplate* DirectionalLightTemplates) {
}

ADirectionalLightSource::ADirectionalLightSource() {
    this->DirectionalLightComponent = CreateDefaultSubobject<USavableDirectionalLightComponent>(TEXT("SavableDirectionalLightComponent"));
}

