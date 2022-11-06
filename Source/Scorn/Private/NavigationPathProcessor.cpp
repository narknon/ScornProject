#include "NavigationPathProcessor.h"

class ULocomotionAction;
class ULocomotionState;

bool UNavigationPathProcessor::ProjectToNavMesh(FVector Point, FVector& ProjectedLocation) {
    return false;
}

ULocomotionAction* UNavigationPathProcessor::KeepActionOnNavMesh(ULocomotionAction* Action, FTransform StartTransform) {
    return NULL;
}

TArray<FTransform> UNavigationPathProcessor::GetUndoActionProjectedPath(const ULocomotionAction* Action, const ULocomotionState* State) {
    return TArray<FTransform>();
}

TArray<FTransform> UNavigationPathProcessor::GetApplyActionProjectedPath(const ULocomotionAction* Action, const ULocomotionState* State) {
    return TArray<FTransform>();
}

UNavigationPathProcessor::UNavigationPathProcessor() {
}

