#include "ActorSwitch.h"
#include "Components/BillboardComponent.h"

void AActorSwitch::SwitchActors(bool Invert) {
}

AActorSwitch::AActorSwitch() {
    this->Icon = CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon"));
    this->bDrawDebug = false;
}

