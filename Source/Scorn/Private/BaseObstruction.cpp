#include "BaseObstruction.h"

class AScornCharacter;

void UBaseObstruction::UpdateObstructionModifier(float DeltaTime) {
}

void UBaseObstruction::SetAttenuationRange(float InRange) {
}



void UBaseObstruction::ObstructionTimelineFinished() {
}

void UBaseObstruction::ObstructionTimelineCallback(float Val) {
}

bool UBaseObstruction::IsListenerInRange() {
    return false;
}

void UBaseObstruction::Init() {
}

float UBaseObstruction::GetSquaredDistanceToListener() {
    return 0.0f;
}

float UBaseObstruction::GetObstructionModifier() {
    return 0.0f;
}

float UBaseObstruction::GetObsSum() {
    return 0.0f;
}

AScornCharacter* UBaseObstruction::GetMainCharacter() {
    return NULL;
}

bool UBaseObstruction::GetIsVisible() {
    return false;
}

bool UBaseObstruction::GetIsBlocked() {
    return false;
}

float UBaseObstruction::GetFMODAttenuationRangeScaled() {
    return 0.0f;
}

float UBaseObstruction::GetDistanceInFMODunits() {
    return 0.0f;
}

void UBaseObstruction::DebugObstruction(float DebugDuration) {
}

UBaseObstruction::UBaseObstruction() {
    this->ObstructionDebugger = NULL;
    this->MainCharacter = NULL;
    this->FMODAttenuationRange = 20.00f;
}

