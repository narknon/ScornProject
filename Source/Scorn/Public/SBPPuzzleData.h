#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBPNodeType.h"
#include "SBPPuzzleData.generated.h"

UCLASS(Blueprintable)
class SCORN_API USBPPuzzleData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<SBPNodeType> PuzzleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoOfRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoOfColumns;
    
    USBPPuzzleData();
};

