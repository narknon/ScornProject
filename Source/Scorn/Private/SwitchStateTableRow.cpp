#include "SwitchStateTableRow.h"

FSwitchStateTableRow::FSwitchStateTableRow() {
    this->CapsuleCollision = false;
    this->MeshCollision = false;
    this->MeshVisibility = false;
    this->MeshPhysics = false;
    this->MeshTick = false;
    this->Sound = false;
    this->AI = false;
    this->ActorTick = false;
    this->Perception = false;
}

