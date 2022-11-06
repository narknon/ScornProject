#include "BaseSpatialTemplate.h"

void ABaseSpatialTemplate::SetWeight(const float& inWeight) {
}

float ABaseSpatialTemplate::GetWeight() {
    return 0.0f;
}

ABaseSpatialTemplate::ABaseSpatialTemplate() {
    this->SceneComponent = NULL;
    this->TemplateSelected = false;
}

