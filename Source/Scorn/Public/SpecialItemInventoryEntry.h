#pragma once
#include "CoreMinimal.h"
#include "SpecialItemInventoryEntry.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSpecialItemInventoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 SpecialItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpecialItemObject;
    
    SCORN_API FSpecialItemInventoryEntry();
};

