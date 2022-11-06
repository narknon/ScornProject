#include "ItemUsePlaceObject.h"
#include "Components/SphereComponent.h"

class UItem;
class UPrimitiveComponent;
class AActor;

void AItemUsePlaceObject::TriggerItemUsage() {
}

UItem* AItemUsePlaceObject::TakeContainedItem() {
    return NULL;
}

void AItemUsePlaceObject::SetItem(UItem* Item, bool Initialization) {
}

void AItemUsePlaceObject::SetHasItem(bool NewHasItem) {
}




bool AItemUsePlaceObject::HasItem() const {
    return false;
}

void AItemUsePlaceObject::HandlePullOutTriggerOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AItemUsePlaceObject::HandlePullOutTriggerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AItemUsePlaceObject::CreateContainingItem(bool Initialization) {
}

AItemUsePlaceObject::AItemUsePlaceObject() {
    this->AllowedHeightDifference = 200.00f;
    this->bHasItem = false;
    this->ContainedItem = NULL;
    this->ItemType = 0;
    this->WorkMode = EIUOWorkMode::Undefined;
    this->MainCharacterItemPullOutTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("MainCharacterItemPullOutTrigger"));
}

