#pragma once
#include "CoreMinimal.h"
#include "PanelPuzzleCellInfo.generated.h"

USTRUCT(BlueprintType)
struct FPanelPuzzleCellInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pattern1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pattern2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pattern3;
    
    SCORN_API FPanelPuzzleCellInfo();
};

