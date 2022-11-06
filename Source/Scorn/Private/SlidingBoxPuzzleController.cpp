#include "SlidingBoxPuzzleController.h"

class UStaticMeshComponent;
class UMeshComponent;

void ASlidingBoxPuzzleController::SplitSecondTarget(UStaticMeshComponent* TargetBottom) {
}

bool ASlidingBoxPuzzleController::ShouldSpawnTargets_Implementation() {
    return false;
}

void ASlidingBoxPuzzleController::SavePuzzle() {
}

bool ASlidingBoxPuzzleController::RemoveTargetBox() {
    return false;
}

void ASlidingBoxPuzzleController::PuzzleInitialize(bool bLoad) {
}

bool ASlidingBoxPuzzleController::MoveUp() {
    return false;
}

bool ASlidingBoxPuzzleController::MoveRight() {
    return false;
}

void ASlidingBoxPuzzleController::MoveMoldUp(float InHeightOffset) {
}

void ASlidingBoxPuzzleController::MoveMoldRight(float InAngleOffset) {
}

void ASlidingBoxPuzzleController::MoveMoldLeft(float InAngleOffset) {
}

void ASlidingBoxPuzzleController::MoveMoldDown(float InHeightOffset) {
}

bool ASlidingBoxPuzzleController::MoveLeft() {
    return false;
}

bool ASlidingBoxPuzzleController::MoveDown() {
    return false;
}

void ASlidingBoxPuzzleController::LoadPuzzle() {
}


bool ASlidingBoxPuzzleController::IsBoxGrababble() {
    return false;
}

void ASlidingBoxPuzzleController::GrabBox(bool Grab) {
}

UMeshComponent* ASlidingBoxPuzzleController::GetMarkedMold() const {
    return NULL;
}

int32 ASlidingBoxPuzzleController::GetClawNodeID() {
    return 0;
}

bool ASlidingBoxPuzzleController::CanMoveUp() {
    return false;
}

bool ASlidingBoxPuzzleController::CanMoveRight() {
    return false;
}

bool ASlidingBoxPuzzleController::CanMoveLeft() {
    return false;
}

bool ASlidingBoxPuzzleController::CanMoveDown() {
    return false;
}

ASlidingBoxPuzzleController::ASlidingBoxPuzzleController() {
    this->SingleTargetMoldActor = NULL;
    this->Radius = 0.00f;
    this->Angle = 0.00f;
    this->AngleOffset = 0.00f;
    this->Height = 0.00f;
    this->HeightOffset = 0.00f;
    this->GapSize = 4;
    this->NodeMesh = NULL;
    this->SingleMold = NULL;
    this->SingleRemainsMold = NULL;
    this->HorizontalDoubleMoldCounter = 0;
    this->VerticalDoubleMold = NULL;
    this->QuadrupleMold = NULL;
    this->SingleTargetMold = NULL;
    this->DoubleTargetMold = NULL;
    this->SavedID = 0;
    this->LoadAngle = 0.00f;
    this->LoadHeight = 0.00f;
}

