#include "BodyPart.h"
#include "ActorSwitchTriggerComponent.h"
#include "Components/SkeletalMeshComponent.h"

void ABodyPart::SwitchOn() {
}

void ABodyPart::SwitchOff() {
}

void ABodyPart::SetSwitchedOn_Implementation(bool bSwitchOn) {
}

USkeletalMeshComponent* ABodyPart::GetSourceMesh() const {
    return NULL;
}

ABodyPart::ABodyPart() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SK_Mesh"));
    this->SwitchTrigger = CreateDefaultSubobject<UActorSwitchTriggerComponent>(TEXT("SwitchTrigger"));
}

