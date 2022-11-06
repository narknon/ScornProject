#include "WorldSectionLink.h"

FWorldSectionLink::FWorldSectionLink() {
    this->LinkedSectionID = 0;
    this->ElevatorMoveDirection = EInfiniteElevatorDirection::Up;
    this->MinimumMovementDuration = 0.00f;
    this->bDisableOnLoad = false;
}

