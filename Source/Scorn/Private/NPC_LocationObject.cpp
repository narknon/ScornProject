#include "NPC_LocationObject.h"

class UPivotComponent;

void ANPC_LocationObject::SetInUse(bool bUse) {
}

bool ANPC_LocationObject::IsUsable_Implementation(const ELocationUseType UseType) const {
    return false;
}

FRotator ANPC_LocationObject::GetPivotRotation(UPivotComponent* Pivot) const {
    return FRotator{};
}

void ANPC_LocationObject::GetPivotLocationAndRotation(UPivotComponent* Pivot, FVector& PivotLocation, FRotator& PivotRotation) {
}

FVector ANPC_LocationObject::GetPivotLocation(UPivotComponent* Pivot) const {
    return FVector{};
}





ANPC_LocationObject::ANPC_LocationObject() {
    this->bCanBeUsedForEntering = true;
    this->LocationType = ENPCLocationType::Default;
    this->bShouldHideMesh = true;
    this->bCanDetectEnemy = false;
}

