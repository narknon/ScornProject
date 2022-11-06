#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavCell.generated.h"

class AFlightNavigationGrid;

USTRUCT(BlueprintType)
struct FNavCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexInGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector GridCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFlightNavigationGrid* ParentGrid;
    
    SCORN_API FNavCell();
};


FORCEINLINE uint32 GetTypeHash(const FNavCell) { return 0; };