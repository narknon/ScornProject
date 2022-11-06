#include "BaseSpatialTrigger.h"

class UPrimitiveComponent;
class AActor;
class UBoxComponent;

void ABaseSpatialTrigger::SetColor(FLinearColor Color) {
}


void ABaseSpatialTrigger::HandleOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABaseSpatialTrigger::HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UBoxComponent* ABaseSpatialTrigger::GetBoxComponent() {
    return NULL;
}

ABaseSpatialTrigger::ABaseSpatialTrigger() {
    this->BoxOpacity = 0.20f;
    this->BoxComponent = NULL;
    this->Material = NULL;
}

