#pragma once
#include "CoreMinimal.h"
#include "AssetPointerArray.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAssetPointerArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> Array;
    
    SCORN_API FAssetPointerArray();
};

