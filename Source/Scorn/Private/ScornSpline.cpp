#include "ScornSpline.h"

class USplineComponent;
class UStaticMeshComponent;

void AScornSpline::set_rotation_at_spline_point(USplineComponent* Target, const int32 point_index, const FRotator Rotation) {
}

void AScornSpline::OverrideLightMapResolutionForComponent(UStaticMeshComponent* Component, int32 Resolution, bool bOverride) {
}

FRotator AScornSpline::GetSplineRotations(USplineComponent* Target, int32 Index) {
    return FRotator{};
}


void AScornSpline::ClearCachedOverrideResolutions() {
}

AScornSpline::AScornSpline() {
    this->SplineType = EScornSplineType::Array;
    this->bOverrideLightMapResolution = false;
    this->LightMapResolutionDivider = 10;
    this->CachedStartCapCapOverrideResolution = 0;
    this->CachedEndCapOverrideResolution = 0;
    this->IsOverrideResCacheCleard = false;
}

