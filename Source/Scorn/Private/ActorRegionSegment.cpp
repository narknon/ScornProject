#include "ActorRegionSegment.h"
#include "Components/BoxComponent.h"

class UActorSwitchTriggerComponent;

bool AActorRegionSegment::CheckIsInSegment(UActorSwitchTriggerComponent* SwitchComponent) {
    return false;
}

AActorRegionSegment::AActorRegionSegment() {
    this->Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
}

