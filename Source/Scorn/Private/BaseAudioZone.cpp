#include "BaseAudioZone.h"

class AActor;



void ABaseAudioZone::HandleOverlapEnd(AActor* Trigger, AActor* OverlappedActor) {
}

void ABaseAudioZone::HandleOverlapBegin(AActor* Trigger, AActor* OverlappedActor) {
}

ABaseAudioZone::ABaseAudioZone() {
    this->bDebug = true;
    this->DebugTriggers = false;
}

