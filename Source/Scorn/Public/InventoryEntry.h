#pragma once
#include "CoreMinimal.h"
#include "InventoryEntry.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FInventoryEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> EntryItems;
    
    UPROPERTY(EditAnywhere)
    uint8 ItemId;
    
public:
    SCORN_API FInventoryEntry();
};

