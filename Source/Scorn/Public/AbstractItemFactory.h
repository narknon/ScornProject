#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "AbstractItemFactory.generated.h"

class UItem;

UCLASS(Blueprintable)
class SCORN_API UAbstractItemFactory : public UObject {
    GENERATED_BODY()
public:
    UAbstractItemFactory();
protected:
    UFUNCTION(BlueprintCallable)
    UItem* CreateItemFromClass(uint8 ItemId, TSubclassOf<UItem> ItemClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UItem* CreateItem(uint8 ItemId);
    
};

