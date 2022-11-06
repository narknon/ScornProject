#include "AudioZoneTrigger.h"

class AActor;

void AAudioZoneTrigger::HandleOverlapEnd(AActor* Trigger, AActor* OverlappedActor) {
}

void AAudioZoneTrigger::HandleOverlapBegin(AActor* Trigger, AActor* OverlappedActor) {
}

AAudioZoneTrigger::AAudioZoneTrigger() {
    this->ParentZone = NULL;
}

