#pragma once
#include "CoreMinimal.h"
#include "EHeatBoxType.h"
#include "UObject/NoExportTypes.h"
#include "HeatBox.generated.h"

USTRUCT(BlueprintType)
struct FHeatBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeatBoxType BoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ratio;
    
    SCORN_API FHeatBox();
};

