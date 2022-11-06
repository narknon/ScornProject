#include "Rail.h"
#include "Components/SplineComponent.h"

class ARail;

void ARail::SnapSplineEndpointsToLinks() {
}

void ARail::SetAutomatic(bool bInAutomatic) {
}

void ARail::RemoveRailLink(ARail* Rail, ESplinePosition LinkPosition) {
}

bool ARail::IsAutomatic() const {
    return false;
}

int32 ARail::HasRailLink(ARail* Rail, ESplinePosition LinkPosition) const {
    return 0;
}

bool ARail::GetValidRailLink(FRailLink& OutLink, ESplinePosition PositionOnSpline) {
    return false;
}

float ARail::GetLength() {
    return 0.0f;
}

float ARail::GetDistanceOnRailAtPoint(int32 PointIndex) {
    return 0.0f;
}

void ARail::ClearRailLinks(ESplinePosition LinkPosition) {
}

void ARail::AddRailLink(ARail* Rail, ESplinePosition LinkPosition, ESplinePosition PositionOnLinkedRail) {
}

ARail::ARail() {
    this->RailActive = true;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->bAutomatic = false;
}

