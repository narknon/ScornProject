#include "BaseUsableObject.h"
#include "Components/BillboardComponent.h"
#include "Components/SphereComponent.h"

class AScornCharacter;
class UPrimitiveComponent;

void ABaseUsableObject::TryEndUse() {
}

void ABaseUsableObject::StartObjectUse(AScornCharacter* Character) {
}

void ABaseUsableObject::SnapUserUseToFloor() {
}

void ABaseUsableObject::SnapUserExitToFloor() {
}


void ABaseUsableObject::SetForceFocusCamera(bool Focus, FVector FocusLocation, float TransitionDuration) {
}


void ABaseUsableObject::OnUseStart_Implementation() {
}


void ABaseUsableObject::OnUseEnd_Implementation() {
}





bool ABaseUsableObject::IsUserOnTheLeftSide() {
    return false;
}

bool ABaseUsableObject::IsEndingUse() const {
    return false;
}

bool ABaseUsableObject::IsDisabled() const {
    return false;
}

bool ABaseUsableObject::IsCurrentlyUsableBy(AScornCharacter* Character) {
    return false;
}


void ABaseUsableObject::InitAutopilot() {
}

EUseFailAnimation ABaseUsableObject::GetUseFailAnimation_Implementation(AScornCharacter* UserObject) const {
    return EUseFailAnimation::Undefined;
}

TArray<UPrimitiveComponent*> ABaseUsableObject::GetSightTriggers_Implementation() const {
    return TArray<UPrimitiveComponent*>();
}

void ABaseUsableObject::ExitAnimEnd() {
}

void ABaseUsableObject::Enable(bool Flag) {
}

FVector ABaseUsableObject::CalculateUseSnapLocation(const FVector& ActorLocation) {
    return FVector{};
}

void ABaseUsableObject::BeginUseStartAnim() {
}

bool ABaseUsableObject::AreAllRequirementsForUseMet_Implementation(AScornCharacter* InUser) {
    return false;
}

ABaseUsableObject::ABaseUsableObject() {
    this->CanEnterUseFail = true;
    this->WorkModeVariation = 0;
    this->MaxUseDistance = 300.00f;
    this->PlayerSightSensor = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerSightSensor"));
    this->UseAngle = 70.00f;
    this->SnapZOffset = 1.50f;
    this->DebugSnapping = false;
    this->User = NULL;
    this->bHasUseFailAnimation = false;
    this->bAllowRootMotion = false;
    this->CameraTargetStart = CreateDefaultSubobject<UBillboardComponent>(TEXT("CameraTargetStart"));
    this->CameraTargetEnd = CreateDefaultSubobject<UBillboardComponent>(TEXT("CameraTargetEnd"));
    this->bFocusCameraOnEnter = false;
    this->bFocusCameraOnExit = false;
    this->bFocusCamera = false;
    this->CameraTargetUpdateCooldown = 1.00f;
    this->YawDiffLimitOnConsole = 60.00f;
    this->PtichDiffLimitOnConsole = 87.50f;
    this->UserUseSpot = CreateDefaultSubobject<UBillboardComponent>(TEXT("UserUseSpot"));
    this->UserEndUseSpot = CreateDefaultSubobject<UBillboardComponent>(TEXT("UserEndUseSpot"));
    this->bEndingUse = true;
    this->bShouldHolsterWeapon = true;
    this->StartAnimRatio = 1.00f;
    this->MaxUserSpeed = 160.00f;
    this->MinUserSpeed = 50.00f;
}

