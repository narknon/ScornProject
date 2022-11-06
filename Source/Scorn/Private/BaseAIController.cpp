#include "BaseAIController.h"
#include "Perception/AIPerceptionComponent.h"

class UNavigationPath;
class ABaseNPC;
class UWorldStateComponent;


void ABaseAIController::UpdateCurrentPath(FVector TargetLocation, bool& IsValid, bool& IsPartial) {
}

void ABaseAIController::StopThinking() {
}

void ABaseAIController::SetBlockDetectionParams(float DistThreshold, float Int, int32 NSamples) {
}

void ABaseAIController::ResumeThinking() {
}

void ABaseAIController::OnCallToArms(ABaseNPC* Ally) {
}

UNavigationPath* ABaseAIController::MakePathToLocation(FVector TargetLocation) {
    return NULL;
}

bool ABaseAIController::IsThinking() const {
    return false;
}

bool ABaseAIController::IsLocationReachable(FVector Location) {
    return false;
}

bool ABaseAIController::IsLocationInCone(const FVector& Location, const float& ConeHalfAngle) const {
    return false;
}

bool ABaseAIController::IsEnemyInAttackRange(EAttackType AttackType) const {
    return false;
}

bool ABaseAIController::IsEnemyInAttackCone() const {
    return false;
}

bool ABaseAIController::IsEnemyDead() const {
    return false;
}

bool ABaseAIController::IsDead() const {
    return false;
}

bool ABaseAIController::IsAlone() const {
    return false;
}

UWorldStateComponent* ABaseAIController::GetWorldState() const {
    return NULL;
}

UNavigationPath* ABaseAIController::GetPathToPlayer() {
    return NULL;
}


void ABaseAIController::DrawDebugPath(const UNavigationPath* Path, FColor DebugColor) {
}

ABaseAIController::ABaseAIController() {
    this->BaseNPC = NULL;
    this->BehaviorTreeAsset = NULL;
    this->BlackboardAsset = NULL;
    this->bFakeEnemyPerception = false;
    this->AIPerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
    this->bEnemyVisible = false;
    this->CurrentPath = NULL;
    this->bDebugPath = false;
    this->PathRefreshRate = 0.00f;
    this->GroupController = NULL;
}

