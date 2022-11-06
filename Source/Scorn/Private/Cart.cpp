#include "Cart.h"

bool ACart::ShouldMove() {
    return false;
}



void ACart::Move() {
}



void ACart::Init() {
}

float ACart::GetDirectionSign() const {
    return 0.0f;
}

ACart::ACart() {
    this->DeltaMovement = 0.00f;
    this->bIsMoving = false;
    this->CartRailAlignmentFactor = 1;
    this->MaxSpeed = 0.00f;
    this->CartDistanceAlongRail = 0.00f;
    this->Rotated = false;
    this->InRotation = false;
    this->ForwardInput = 0.00f;
    this->SideInput = 0.00f;
    this->SideSign = 0.00f;
    this->CartRail = NULL;
}

