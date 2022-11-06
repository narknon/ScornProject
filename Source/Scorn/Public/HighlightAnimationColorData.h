#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "HighlightAnimationColorData.generated.h"

USTRUCT(BlueprintType)
struct FHighlightAnimationColorData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    SCORN_API FHighlightAnimationColorData();
};

