#include "BaseMachineComponent.h"

UBaseMachineComponent::UBaseMachineComponent() {
    this->bActivated = false;
    this->bIsVisible = false;
    this->bMachineInUse = false;
    this->bUsable = false;
    this->bDirectionUsable = false;
}

