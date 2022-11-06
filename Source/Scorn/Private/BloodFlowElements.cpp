#include "BloodFlowElements.h"
#include "Components/DecalComponent.h"

ABloodFlowElements::ABloodFlowElements() {
    this->Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Component"));
}

