#include "ActorSwitchBaseRegion.h"
#include "Components/BillboardComponent.h"

void AActorSwitchBaseRegion::TurnDebugDrawOn() {
}

void AActorSwitchBaseRegion::TurnDebugDrawOff() {
}

void AActorSwitchBaseRegion::SwitchActorsCustomDuration(const bool& SwitchOn, const float& OverrideDuration) {
}

void AActorSwitchBaseRegion::SwitchActors(const bool& SwitchOn, const ESwitchType& SwitchType) {
}


FString AActorSwitchBaseRegion::GetRegionStatus() {
    return TEXT("");
}

FText AActorSwitchBaseRegion::GetRegionName() const {
    return FText::GetEmpty();
}

FColor AActorSwitchBaseRegion::GetRegionDebugColor() const {
    return FColor{};
}

AActorSwitchBaseRegion::AActorSwitchBaseRegion() {
    this->SwitchDuration = 0.00f;
    this->bPrioritizeByDistance = false;
    this->Icon = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root"));
    this->bIsSwitchedOn = false;
}

