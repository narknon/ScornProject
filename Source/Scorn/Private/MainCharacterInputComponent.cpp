#include "MainCharacterInputComponent.h"

FDebugInputData UMainCharacterInputComponent::GetDebugInputData() {
    return FDebugInputData{};
}

UMainCharacterInputComponent::UMainCharacterInputComponent() {
    this->AimButtonPressTime = 0.10f;
    this->CancelButtonPressTime = 0.60f;
    this->CancelButtonReleaseAnimSpeed = 3.00f;
}

