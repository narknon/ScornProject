#include "MainCharacterTriggerHub.h"

class AMainCharacterTrigger;
class AScornCharacter;

void AMainCharacterTriggerHub::ResetHub() {
}

void AMainCharacterTriggerHub::HandleOverlapEnd(AMainCharacterTrigger* Trigger, AScornCharacter* Character) {
}

void AMainCharacterTriggerHub::HandleOverlapBegin(AMainCharacterTrigger* Trigger, AScornCharacter* Character) {
}

AMainCharacterTriggerHub::AMainCharacterTriggerHub() {
    this->bDrawDebug = false;
}

