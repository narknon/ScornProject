#include "BaseProceduralSplineLocation.h"
#include "Components/SplineComponent.h"

float ABaseProceduralSplineLocation::GetDistanceAlongSplineForWorldLocation(FVector Location) const {
    return 0.0f;
}

ABaseProceduralSplineLocation::ABaseProceduralSplineLocation() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("ProceduralSplineComponent"));
    this->Debug = false;
    this->ListenerCamera = NULL;
}

