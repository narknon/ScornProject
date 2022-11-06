#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DamageMultiplierTableRow.generated.h"

USTRUCT(BlueprintType)
struct FDamageMultiplierTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Melee;
    
    SCORN_API FDamageMultiplierTableRow();
};

