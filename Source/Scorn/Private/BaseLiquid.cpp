#include "BaseLiquid.h"
#include "Components/DecalComponent.h"

ABaseLiquid::ABaseLiquid() {
    this->LiquidType = ELiquidType::None;
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Component"));
}

