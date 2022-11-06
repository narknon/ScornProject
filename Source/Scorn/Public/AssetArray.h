#pragma once
#include "CoreMinimal.h"
#include "AssetArray.generated.h"

USTRUCT(BlueprintType)
struct FAssetArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Assets;
    
    SCORN_API FAssetArray();
};

