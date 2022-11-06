#include "SplineNpc.h"
#include "Components/SplineComponent.h"
#include "Components/SkeletalMeshComponent.h"

void ASplineNpc::ToggleDebug() {
}

void ASplineNpc::Initialize(bool bInitAnimBlueprint) {
}

float ASplineNpc::GetInitialSplineTime() const {
    return 0.0f;
}



ASplineNpc::ASplineNpc() {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SK_SplineNpc"));
    this->SplineNpcAnimBP = NULL;
    this->Speed = 0.00f;
    this->CurrentTime = 0.00f;
    this->AnimVariation = 0;
    this->AnimSequence = NULL;
    this->bClosedLoop = false;
    this->bDebug = false;
}

