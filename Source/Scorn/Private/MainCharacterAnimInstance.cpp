#include "MainCharacterAnimInstance.h"

void UMainCharacterAnimInstance::SetUpperBodyIdle(bool Flag) {
}


void UMainCharacterAnimInstance::OnAutopilotStart_Implementation(bool isStartUse) {
}

void UMainCharacterAnimInstance::OnAutopilotEnd_Implementation(bool isStartUse) {
}

bool UMainCharacterAnimInstance::IsReadyToUseObject_Implementation() {
    return false;
}

void UMainCharacterAnimInstance::AnimNotify_ItemTakeFromWorld() {
}

void UMainCharacterAnimInstance::AnimNotify_ItemTakeFromParasiteHand() {
}

void UMainCharacterAnimInstance::AnimNotify_ItemLeaveInWorld() {
}

void UMainCharacterAnimInstance::AnimNotify_ItemLeaveInParasiteHand() {
}

void UMainCharacterAnimInstance::AnimNotify_ConsoleKeyInserted() {
}

UMainCharacterAnimInstance::UMainCharacterAnimInstance() {
    this->bExitConsole = false;
    this->CurrentUseFailAnim = EUseFailAnimation::Undefined;
    this->CameraYaw = 0.00f;
    this->StationaryCameraYaw = 0.00f;
    this->CameraPitch = 0.00f;
    this->ConsoleTypeInUse = EScornConsoleType::None;
    this->MyCharacter = NULL;
    this->CharacterState = ECharacterState::Idle;
    this->bIsUpperBodyIdle = true;
    this->bForceCrouching = false;
}

