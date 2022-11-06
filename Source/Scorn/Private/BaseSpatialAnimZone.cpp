#include "BaseSpatialAnimZone.h"

class AActor;

void ABaseSpatialAnimZone::SetListener(AActor* ListenerToRegister) {
}

void ABaseSpatialAnimZone::HandleTriggerBeginOverlap(AActor* OtherActor) {
}

AActor* ABaseSpatialAnimZone::GetListener() {
    return NULL;
}

ABaseSpatialAnimZone::ABaseSpatialAnimZone() {
    this->InterpolationPowerParameter = 2.00f;
    this->Priority = 0;
    this->Listener = NULL;
    this->GameMode = NULL;
}

