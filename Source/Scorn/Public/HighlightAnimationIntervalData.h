#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HighlightAnimationIntervalData.generated.h"

USTRUCT(BlueprintType)
struct FHighlightAnimationIntervalData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    SCORN_API FHighlightAnimationIntervalData();
};

