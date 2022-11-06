#include "BaseNPC.h"
#include "PatrolComponent.h"
#include "LocationUseComponent.h"
#include "AutopilotComponent.h"
#include "HitReactionComponent.h"
#include "ActorSwitchTriggerComponent.h"

class AMainCharacterTrigger;
class AScornCharacter;
class ACharacter;
class UWorldStateComponent;
class USkeletalMeshComponent;
class UBaseNPCAnimInstance;

void ABaseNPC::TriggerScript(AMainCharacterTrigger* Trigger, AScornCharacter* MainCharacter) {
}

void ABaseNPC::SwitchCharacterOn() {
}

void ABaseNPC::SwitchCharacterOff() {
}

void ABaseNPC::StartLiftRide() {
}

void ABaseNPC::SimulateHitEvent(EBodypartType BodyPart, FName BoneName) {
}


bool ABaseNPC::ShouldNPCSwitchAffectThinking_Implementation() {
    return false;
}

void ABaseNPC::SetNpcDeadOnLoad_Implementation() {
}

void ABaseNPC::SetEnableCollisionAndMovement_Implementation(bool bEnable) {
}

void ABaseNPC::SetCharacterSpawned(bool bEnable) {
}

void ABaseNPC::ResetVirtualBones() {
}







void ABaseNPC::OnDeath() {
}



bool ABaseNPC::IsAtHisDestinationHole() const {
    return false;
}

void ABaseNPC::HitReaction_Implementation(const FBodyPartHitData& HitBodyPartData, EWeapons WeaponType, ACharacter* DamageDealer, float Damage, const EDamageType& DamageType) {
}

UWorldStateComponent* ABaseNPC::GetWorldState() const {
    return NULL;
}

float ABaseNPC::GetTurnAngle(FVector TargetLocation) const {
    return 0.0f;
}

float ABaseNPC::GetSteeringRate(ESteeringType SteeringType) const {
    return 0.0f;
}



FRotator ABaseNPC::GetEyesRotation() const {
    return FRotator{};
}

FVector ABaseNPC::GetEyesLocation() const {
    return FVector{};
}

USkeletalMeshComponent* ABaseNPC::GetCharacterMesh() const {
    return NULL;
}

float ABaseNPC::GetAttackRange(EAttackType AttackType) const {
    return 0.0f;
}

float ABaseNPC::GetAttackHalfAngle() const {
    return 0.0f;
}

float ABaseNPC::GetAttackCooldown() const {
    return 0.0f;
}

UBaseNPCAnimInstance* ABaseNPC::GetAnimBP() const {
    return NULL;
}

FVector ABaseNPC::GetAlternateQueryExtent() const {
    return FVector{};
}

FVector ABaseNPC::GetActorPivotPoint() const {
    return FVector{};
}

float ABaseNPC::GetAcceptanceRadius(EMovementType MovementType) const {
    return 0.0f;
}

void ABaseNPC::EndLiftRide() {
}



void ABaseNPC::DismemberBodyPart(EBodypartType BodyPartType, EDamageType DamageType) {
}

FVector ABaseNPC::ConvertFloorToCharacterLocation(FVector FloorLocation) const {
    return FVector{};
}


FTransform ABaseNPC::AnimationWarping(const FTransform CurrentTransform, FTransform DeltaTransform, const FTransform RemainingCorrection, const FVector RemainingAnimTranslation, const FVector RemainingAnimRotation, const float FractionTime) const {
    return FTransform{};
}

ABaseNPC::ABaseNPC() {
    this->BaseAIController = NULL;
    this->NPCType = ENPCType::EuBear;
    this->SurfaceType = SurfaceType_Default;
    this->NavigationPathProcessor = NULL;
    this->bKeepActorOnNavmesh = true;
    this->LocationUseComponent = CreateDefaultSubobject<ULocationUseComponent>(TEXT("LocationUseComponent"));
    this->PatrolComponent = CreateDefaultSubobject<UPatrolComponent>(TEXT("PatrolComponent"));
    this->BehaviorComponent = NULL;
    this->AutopilotComponent = CreateDefaultSubobject<UAutopilotComponent>(TEXT("AutopilotComponent"));
    this->HitReactionComponent = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactionComponent"));
    this->SteeringRateRun = 45.00f;
    this->SteeringRateWalk = 45.00f;
    this->SteeringRateAttack = 30.00f;
    this->AcceptanceRadiusWalk = 50.00f;
    this->AcceptanceRadiusRun = 100.00f;
    this->InitialHealth = 0.00f;
    this->StartingPoint = NULL;
    this->bScripted = false;
    this->ScriptBehavior = NULL;
    this->BlockedByNpcBacktrack = NULL;
    this->ScriptTriggerDelay = 0.00f;
    this->bUseAnimationWarping = true;
    this->BaseNPCAnimBP = NULL;
    this->bGloryKillEnabled = false;
    this->MeleeAttackRange = 0.00f;
    this->RangedAttackRange = 0.00f;
    this->ChargeRange = 0.00f;
    this->AttackHalfAngle = 0.00f;
    this->AttackCooldown = 0.00f;
    this->MainBoneName = TEXT("main_SH_jnt");
    this->bHasDeathAnimation = false;
    this->DismembermentDataTable = NULL;
    this->DamageMultiplierDataTable = NULL;
    this->bSaveSystemEnabled = true;
    this->IsCharacterSwitchedOn = true;
    this->bCustomActivated = false;
    this->NPCSwitchTrigger = CreateDefaultSubobject<UActorSwitchTriggerComponent>(TEXT("NPCSwitchTrigger"));
    this->bCharacterSpawned = false;
    this->SwitchStateDataTable = NULL;
    this->SoundManager = NULL;
    this->bDebugAI = false;
}

