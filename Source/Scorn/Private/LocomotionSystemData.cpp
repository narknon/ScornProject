#include "LocomotionSystemData.h"

class ULocomotionAction;
class ABaseNPC;
class ULocomotionState;
class ULocomotionActionDataAsset;

ULocomotionState* ULocomotionSystemData::MakeLocomotionState(const EAnimPose AnimPose, const FTransform Transform) {
    return NULL;
}

ULocomotionAction* ULocomotionSystemData::MakeLocomotionAction(ABaseNPC* NPCOwner, const ULocomotionActionDataAsset* LocomotionActionDataAsset, const float BlendSpaceParameter) {
    return NULL;
}

bool ULocomotionSystemData::AreLocomotionStateEqual(const ULocomotionState* LocomotionState1, const ULocomotionState* LocomotionState2) {
    return false;
}

bool ULocomotionSystemData::AreAnimPoseEqual(const EAnimPose AnimPose1, const EAnimPose AnimPose2) {
    return false;
}

ULocomotionSystemData::ULocomotionSystemData() {
}

