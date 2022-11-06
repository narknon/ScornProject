#include "Item.h"

class AItemUsePlaceObject;
class UObject;
class AItemGraphics;

void UItem::Use(AItemUsePlaceObject* UsePlaceObject) {
}

AItemGraphics* UItem::SpawnGraphics(UObject* Owner) {
    return NULL;
}


void UItem::SetInInventory(bool bIsInInventory, int32 InEntryIndex) {
}



void UItem::HandleItemUseTriggeredInAnim() {
}

TSoftClassPtr<AItemGraphics> UItem::GetItemGraphicsClass() const {
    return NULL;
}

AItemGraphics* UItem::GetGraphics() {
    return NULL;
}


void UItem::DestroyGraphics() {
}

bool UItem::AreAllRequirementsForUseMet_Implementation(AItemUsePlaceObject* UsePlaceObject) {
    return false;
}

UItem::UItem() {
    this->ItemId = 0;
    this->MaxInventoryInstances = 1;
    this->GraphicsActor = NULL;
    this->EntryIndex = -1;
    this->InInventory = false;
}

