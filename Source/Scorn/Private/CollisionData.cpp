#include "CollisionData.h"

FCollisionData::FCollisionData() {
    this->AgentRadius = 0.00f;
    this->ColliderRadius = 0.00f;
    this->bHeadOn = false;
    this->OverlapPercentage = 0.00f;
    this->CollisionTime = 0.00f;
    this->bColliderIsStatic = false;
    this->Collider = NULL;
}

