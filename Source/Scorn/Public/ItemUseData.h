#pragma once
#include "CoreMinimal.h"
#include "EItemUseMode.h"
#include "ItemUseData.generated.h"

USTRUCT(BlueprintType)
struct FItemUseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUseMode ItemUseMode;
    
    UPROPERTY(EditAnywhere)
    uint8 ItemUseVariation;
    
    UPROPERTY(EditAnywhere)
    uint8 ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoOfItemsInEntry;
    
    SCORN_API FItemUseData();
};

