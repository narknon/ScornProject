#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EScornMenuActions.h"
#include "ScornMenuActionKeysTable.generated.h"

USTRUCT(BlueprintType)
struct FScornMenuActionKeysTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EScornMenuActions> MenuActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> Keys;
    
    SCORN_API FScornMenuActionKeysTable();
};

