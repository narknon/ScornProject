#include "ScornCharacter.h"
#include "CrosshairController.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "WeaponController.h"

class ABaseUsableObject;
class AWeapon;
class USceneComponent;
class AItemUsePlaceObject;
class ABaseConsole;
class UPrimitiveComponent;
class AActor;
class UWorld;
class UMaterialInstanceDynamic;

void AScornCharacter::WeaponChangeEnd() {
}

void AScornCharacter::UpdateMouseSensitivityStandardized() {
}

void AScornCharacter::UpdateFOV(float Value) {
}

float AScornCharacter::UpdateCurrentPitchUpperLimit_Implementation(float CurrentPitchLimit) {
    return 0.0f;
}

float AScornCharacter::UpdateCurrentPitchLowerLimit_Implementation(float CurrentPitchLimit) {
    return 0.0f;
}

void AScornCharacter::UpdateCameraRotation() {
}

void AScornCharacter::TryUse(ABaseUsableObject* UsableObject, bool Force) {
}


void AScornCharacter::TryReload() {
}




void AScornCharacter::SpawnWeapon(const EWeapons& Weapon, AWeapon*& OutWeapon) {
}


bool AScornCharacter::ShouldForwardInputToConsole() {
    return false;
}


void AScornCharacter::SetZSmoothingDataToDefault() {
}

void AScornCharacter::SetWeaponReturnToScreenNotNeeded(bool WeaponReturnToScreenNotNeeded) {
}


void AScornCharacter::SetUseCameraFocusCurveWithNoObjectInUse(bool bUse) {
}

void AScornCharacter::SetSkipPlayerTransformLoad(bool Skip) {
}

void AScornCharacter::SetShouldReturnWeaponToScreen(bool ReturnWeaponToScreen) {
}

void AScornCharacter::SetPostProcessMaterialWeight(int32 Index, float Weight) {
}

void AScornCharacter::SetOverrideVelocity(FVector InVelocity) {
}

void AScornCharacter::SetMovementSpeedOverride(bool Override, float InMovementSpeedOverrideValue) {
}

void AScornCharacter::SetMotionBlurPostEffects(float Amount) {
}

void AScornCharacter::SetMotionBlurEffectsOverride(bool Flag) {
}



void AScornCharacter::SetForcedCrouching(bool ForceCrouch) {
}

void AScornCharacter::SetDepthOfFieldPostEffect(float Aperture, float FocalDistance) {
}

void AScornCharacter::SetDepthOfFieldOverride(bool Flag) {
}

void AScornCharacter::SetDepthOfFieldFocalDistanceOverride(bool Flag) {
}

void AScornCharacter::SetDepthOfFieldApertureOverride(bool Flag) {
}

void AScornCharacter::SetDebugMCCapsuleHit(bool Debug) {
}

void AScornCharacter::SetCurrentZSmoothingData(FZSmoothingData Data) {
}


void AScornCharacter::SetCharacterState(ECharacterState State) {
}

void AScornCharacter::SetCharacterMovedWeapon(bool WeaponMoved) {
}

void AScornCharacter::SetCameraOverrideYaw(const float& OverrideYaw) {
}

void AScornCharacter::SetCameraOverridePitch(const float& OverridePitch) {
}

void AScornCharacter::SetCameraOverride(bool OverrideYaw, bool OverridePitch) {
}


void AScornCharacter::SetBloomPostEffects(float Intensity) {
}

void AScornCharacter::SetBloomEffectsOverride(bool Flag) {
}



void AScornCharacter::ResetCameraRotation() {
}

void AScornCharacter::RemoveLastPostProcessMaterial() {
}






void AScornCharacter::OnReload_Implementation() {
}






void AScornCharacter::OnHealthStateChange_Implementation(EHealthState NewHealthState) {
}




void AScornCharacter::OnFireStop_Implementation() {
}

void AScornCharacter::OnFire_Implementation() {
}






void AScornCharacter::OnAutopilotStart_Implementation(bool isStartUse, bool AllowRootMotion) {
}

void AScornCharacter::OnAutopilotEnd_Implementation(bool isStartUse, bool AllowRootMotion) {
}


bool AScornCharacter::IsUsingConsole() const {
    return false;
}

bool AScornCharacter::IsReloadAllowed_Implementation() {
    return false;
}

bool AScornCharacter::IsReadyToUseObject_Implementation() {
    return false;
}

bool AScornCharacter::IsMoving() const {
    return false;
}

bool AScornCharacter::IsMovementInputPressed() {
    return false;
}


bool AScornCharacter::IsHealingAllowed_Implementation() {
    return false;
}

bool AScornCharacter::IsCharacterReadyToUseItem_Implementation(ABaseUsableObject* UsableObject) {
    return false;
}

void AScornCharacter::InitInventoryAmmo(EWeapons WeaponType, USceneComponent* Parent) {
}

bool AScornCharacter::HasAnyWeapon_Implementation() const {
    return false;
}

void AScornCharacter::HandleWeaponAdded_Implementation(EWeapons Weapon) {
}

void AScornCharacter::HandleUseStartAnimEnd() {
}

void AScornCharacter::HandleUseItemAnimationEnd() {
}

void AScornCharacter::HandleUseEndStart(ABaseConsole* InConsole) {
}

void AScornCharacter::HandleUseConsoleAnimationEnd() {
}

void AScornCharacter::HandleObjectUseEnd() {
}

void AScornCharacter::HandleMenuButtonPressed() const {
}

void AScornCharacter::HandleItemUseEnd() {
}

void AScornCharacter::HandleGenericTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AScornCharacter::HandleGenericTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AScornCharacter::HandleConsoleUseEnd() {
}

void AScornCharacter::HandleConsoleKeyInserted() {
}

void AScornCharacter::HandleClipLoad(bool IsWeaponFull, bool IsInventoryFull) {
}

EScornConsoleType AScornCharacter::GetTypeOfTheConsoleInUse() {
    return EScornConsoleType::None;
}

bool AScornCharacter::GetShouldReturnWeaponToScreen() const {
    return false;
}


UCameraComponent* AScornCharacter::GetPlayerCamera() const {
    return NULL;
}

ABaseUsableObject* AScornCharacter::GetObjectInUse() const {
    return NULL;
}


bool AScornCharacter::GetLocationProjectedToNavmesh(const FVector QueryExtent, FVector& ProjectedLocation) {
    return false;
}

EIUOWorkMode AScornCharacter::GetItemUsePlaceObjectWorkMode() {
    return EIUOWorkMode::Undefined;
}

AItemUsePlaceObject* AScornCharacter::GetFirstOverlappedItemUsePlaceObject() {
    return NULL;
}

EWeapons AScornCharacter::GetDesiredWeaponType() const {
    return EWeapons::None;
}

UWorld* AScornCharacter::GetCurrentWorld() {
    return NULL;
}

EWeapons AScornCharacter::GetCurrentWeaponType() const {
    return EWeapons::None;
}


ABaseConsole* AScornCharacter::GetConsoleInUse() const {
    return NULL;
}

AItemUsePlaceObject* AScornCharacter::GetClosestOverlappedItemUsePlaceObject() {
    return NULL;
}

bool AScornCharacter::GetCharacterOutOfUsableObject() const {
    return false;
}

bool AScornCharacter::GetCharacterMovedWeapon() const {
    return false;
}


FName AScornCharacter::GetAmmoSocketNameInMCHand(EWeapons Weapon) {
    return NAME_None;
}

FName AScornCharacter::GetAmmoInventorySocketName(const int32& Index, EWeapons WeaponType) {
    return NAME_None;
}



void AScornCharacter::ForceInitialization() {
}

void AScornCharacter::ForceCameraRotation(const float& InCameraYaw, const float& InCameraPitch) {
}


void AScornCharacter::Fire() {
}



EItemUseMode AScornCharacter::DetermineItemUseMode(AItemUsePlaceObject* UsePlaceObject) {
    return EItemUseMode::Undefined;
}




void AScornCharacter::ClearAllOverlappedUsableObjects() {
}


bool AScornCharacter::CanSwitchWeapon_Implementation() {
    return false;
}


bool AScornCharacter::CanDoWeaponAction_Implementation() {
    return false;
}


int32 AScornCharacter::AddPostProcessMaterial(UMaterialInstanceDynamic* Material) {
    return 0;
}


void AScornCharacter::AddKeyPattern(const uint8& KeyPattern) {
}

AScornCharacter::AScornCharacter() {
    this->MovementForward = 0.00f;
    this->MovementSide = 0.00f;
    this->bDebugCapsuleHit = false;
    this->GenericTrigger = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GenericTrigger"));
    this->WeaponController = CreateDefaultSubobject<UWeaponController>(TEXT("WeaponController"));
    this->bInInventoryAnim = false;
    this->IsDoingParry = false;
    this->CurrentWeaponType = EWeapons::None;
    this->DesiredWeaponType = EWeapons::None;
    this->CurrentHealthState = EHealthState::Healthy;
    this->bOverrideCameraSmoothing = false;
    this->bOverrideCameraSensitivity = false;
    this->EMASmoothingPeriodOverride = 0;
    this->CameraSensitivityOverride = 0.00f;
    this->bConsoleStartAnimFinished = false;
    this->RotatingCart = false;
    this->bWeaponReturnToScreenNotNeeded = false;
    this->bParasiteReadyForItemUse = false;
    this->ItemToPrepare = 0;
    this->UndefinedItemType = 0;
    this->ItemUsePlaceObject = NULL;
    this->MCInputComponent = NULL;
    this->Inventory = NULL;
    this->CrosshairController = CreateDefaultSubobject<UCrosshairController>(TEXT("CrosshairController"));
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
    this->bOverrideYaw = false;
    this->bOverridePitch = false;
    this->TurnDelta = 0.00f;
    this->bUseCameraFocusCurveWithNoObjectInUse = false;
    this->YawDiffLimit = 40.00f;
    this->YawDiffLimitOnConsole = 90.00f;
    this->YawDiffLimitWhileParalysed = 0.00f;
    this->PitchLimit = 90.00f;
    this->CameraParent = NULL;
    this->CameraYaw = 0.00f;
    this->CameraPitch = 0.00f;
    this->StationaryCameraYaw = 0.00f;
    this->YawDiff = 0.00f;
    this->DeltaYaw = 0.00f;
    this->DeltaPitch = 0.00f;
    this->CameraMatchSpeed = 100.00f;
    this->FOV = 0.00f;
    this->FOVInAim = 0.00f;
    this->FOVInResurrectedState = 0.00f;
    this->DoStep = false;
    this->StepRotationSpeed = 0.00f;
    this->ScornUserGameSettings = NULL;
    this->CharacterState = ECharacterState::Idle;
    this->AllowDebugJump = false;
    this->EnableIK = false;
    this->Platform = NULL;
    this->bIsOnMovingPlatform = false;
    this->InventoryAnimSpeed = 0.00f;
    this->HandgunRecoilAnimSpeed = 1.00f;
    this->ShotgunRecoilAnimSpeed = 1.00f;
    this->bSkipPlayerTransformLoad = false;
    this->SoundManager = NULL;
}

