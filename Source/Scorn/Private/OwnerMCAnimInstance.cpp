#include "OwnerMCAnimInstance.h"

void UOwnerMCAnimInstance::StartUseObject() {
}

void UOwnerMCAnimInstance::StartConsoleExit_Implementation() {
}

void UOwnerMCAnimInstance::SetForceFocusCamera(bool InForceFocusCamera, float InForceFocusTransitionDuration) {
}

void UOwnerMCAnimInstance::SetFocusedCameraTarget(FVector InFocusedCameraTarget) {
}

void UOwnerMCAnimInstance::AnimNotify_StartAutopilot() {
}

void UOwnerMCAnimInstance::AnimNotify_OnConsoleUseEnd() {
}

void UOwnerMCAnimInstance::AnimNotify_ForceSetCameraRotation() {
}

UOwnerMCAnimInstance::UOwnerMCAnimInstance() {
    this->bObjectInUse = false;
    this->bAutopilotOn = false;
    this->bForceFocusCamera = false;
    this->ForceFocusTransitionDuration = 0.00f;
    this->MovementForward = 0.00f;
    this->MovementSide = 0.00f;
    this->MovementTurn = 0.00f;
    this->MovementForwardExtraSmooth = 0.00f;
    this->MovementAxesChangeSpeed = 0.00f;
    this->SmoothedMovementSpeed = 0.00f;
    this->MovementBlendValue = 0.00f;
    this->MovementBlendChangeSpeed = 0.00f;
}

