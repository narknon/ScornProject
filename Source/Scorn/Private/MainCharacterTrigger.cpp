#include "MainCharacterTrigger.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;

bool AMainCharacterTrigger::IsOverlappingMainCharacter() const {
    return false;
}

void AMainCharacterTrigger::HandleOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMainCharacterTrigger::HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMainCharacterTrigger::Disable() {
}

bool AMainCharacterTrigger::AreTriggerConditionsMet_Implementation() {
    return false;
}

AMainCharacterTrigger::AMainCharacterTrigger() {
    this->Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
}

