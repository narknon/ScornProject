#include "BaseObstructionPathPropagination.h"

void UBaseObstructionPathPropagination::SetPointLocation(const FVector& InLocation) {
}

void UBaseObstructionPathPropagination::SetPointAttenuation(const float& inAttenuation) {
}

void UBaseObstructionPathPropagination::SetPointAngle(const float& inAngle) {
}


float UBaseObstructionPathPropagination::ModifyAttenuationToPathDistanceToListenerRatio(const float& PathDistance) {
    return 0.0f;
}

UBaseObstructionPathPropagination::UBaseObstructionPathPropagination() {
    this->DebugPathPropagination = false;
}

