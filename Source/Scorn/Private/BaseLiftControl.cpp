#include "BaseLiftControl.h"

void ABaseLiftControl::UseControl() {
}


void ABaseLiftControl::LiftMoveEndHandler_Implementation() {
}

bool ABaseLiftControl::IsUsable() {
    return false;
}

ABaseLiftControl::ABaseLiftControl() {
    this->Floor = 0;
    this->bUseLiftPositionDependency = false;
    this->Lift = NULL;
}

