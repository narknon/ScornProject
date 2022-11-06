#include "WorldStateComponent.h"

class ANPC_LocationObject;
class AActor;

void UWorldStateComponent::SetTargetOrientation(FRotator TargetOrientation) {
}

void UWorldStateComponent::SetTargetLocationObject(ANPC_LocationObject* InLocation) {
}

void UWorldStateComponent::SetTargetLocation(FVector TargetLocation) {
}

void UWorldStateComponent::SetScriptTriggered(bool bTriggered) {
}

void UWorldStateComponent::SetScripted(bool bScripted) {
}

void UWorldStateComponent::SetPreviousLocationObject(ANPC_LocationObject* InLocation) {
}

void UWorldStateComponent::SetNextWaypoint(FVector NextWaypoint) {
}

void UWorldStateComponent::SetLocationType(ENPCLocationType LocationType) {
}

void UWorldStateComponent::SetIdle(bool bIdle) {
}

void UWorldStateComponent::SetHomeLocation(FVector HomeLocation) {
}

void UWorldStateComponent::SetHitReaction(bool bHitReaction) {
}

void UWorldStateComponent::SetHealth(float Health) {
}

void UWorldStateComponent::SetEnteredHole(bool bEnteredHole) {
}

void UWorldStateComponent::SetEnemyLocation(FVector EnemyLocation) {
}

void UWorldStateComponent::SetEnemy(AActor* Actor) {
}

void UWorldStateComponent::SetCurrentLocation(ANPC_LocationObject* InLocation) {
}

void UWorldStateComponent::SetCanInterruptScript(bool bCanInterruptScript) {
}

void UWorldStateComponent::SetBehaviorType(EBehaviorType BehaviorType) {
}

void UWorldStateComponent::SetAttackLocation(FVector AttackLocation) {
}

void UWorldStateComponent::SetAmmoCount(int32 AmmoCount) {
}

bool UWorldStateComponent::IsScriptTriggered() const {
    return false;
}

bool UWorldStateComponent::IsScripted() const {
    return false;
}

bool UWorldStateComponent::HasEnteredHole() const {
    return false;
}

FRotator UWorldStateComponent::GetTargetOrientation() const {
    return FRotator{};
}

ANPC_LocationObject* UWorldStateComponent::GetTargetLocationObject() const {
    return NULL;
}

FVector UWorldStateComponent::GetTargetLocation() const {
    return FVector{};
}

ANPC_LocationObject* UWorldStateComponent::GetPreviousLocationObject() const {
    return NULL;
}

FVector UWorldStateComponent::GetNextWaypoint() const {
    return FVector{};
}

ENPCLocationType UWorldStateComponent::GetLocationType() const {
    return ENPCLocationType::Default;
}

FVector UWorldStateComponent::GetHomeLocation() const {
    return FVector{};
}

bool UWorldStateComponent::GetHitReaction() const {
    return false;
}

float UWorldStateComponent::GetHealth() const {
    return 0.0f;
}

FVector UWorldStateComponent::GetEnemyLocation() const {
    return FVector{};
}

AActor* UWorldStateComponent::GetEnemy() const {
    return NULL;
}

ANPC_LocationObject* UWorldStateComponent::GetCurrentLocation() const {
    return NULL;
}

bool UWorldStateComponent::GetCanInterruptScript() const {
    return false;
}

EBehaviorType UWorldStateComponent::GetBehaviorType() const {
    return EBehaviorType::Aggressive;
}

FVector UWorldStateComponent::GetAttackLocation() const {
    return FVector{};
}

int32 UWorldStateComponent::GetAmmoCount() const {
    return 0;
}

UWorldStateComponent::UWorldStateComponent() {
}

