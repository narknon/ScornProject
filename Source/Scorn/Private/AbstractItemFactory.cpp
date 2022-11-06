#include "AbstractItemFactory.h"
#include "Templates/SubclassOf.h"

class UItem;

UItem* UAbstractItemFactory::CreateItemFromClass(uint8 ItemId, TSubclassOf<UItem> ItemClass) {
    return NULL;
}


UAbstractItemFactory::UAbstractItemFactory() {
}

