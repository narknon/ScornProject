#pragma once
#include "CoreMinimal.h"
#include "PortalZonesGridCell.h"
#include "PortalZonesGrid.generated.h"

USTRUCT(BlueprintType)
struct PORTALSYSTEM_API FPortalZonesGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HalfWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HalfLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPortalZonesGridCell> Cells;
    
    FPortalZonesGrid();
};

