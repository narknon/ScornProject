#include "BaseDoor.h"


void ABaseDoor::SetDoorState(const DoorStates NewCurrentDoorState) {
}


DoorStates ABaseDoor::GetDoorState() const {
    return DoorStates::Closed;
}



ABaseDoor::ABaseDoor() {
    this->CurrentDoorState = DoorStates::Closed;
}

