#include "MainCharacterHealthController.h"

void UMainCharacterHealthController::SetHealth(float NewHealth) {
}

void UMainCharacterHealthController::SetGodMode(bool Enable) {
}

void UMainCharacterHealthController::RestoreHealth(float InRestoreAmount) {
}

void UMainCharacterHealthController::OverrideHealthBarDamageSmoothingPeriod(bool bOverride, float OverrideValue) {
}

EHealthState UMainCharacterHealthController::GetHealthState() const {
    return EHealthState::Healthy;
}

float UMainCharacterHealthController::GetCurrentMaxHealth() const {
    return 0.0f;
}

UMainCharacterHealthController::UMainCharacterHealthController() {
    this->HealthBarDamageSmoothingPeriod = 120.00f;
    this->HealthBarHealingSmoothingPeriod = 180.00f;
    this->TempHealth = 0.00f;
}

