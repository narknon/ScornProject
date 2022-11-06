#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath StringAssetReference;
    
    SCORN_API FAssetInfo();
};

