#pragma once
#include "CoreMinimal.h"
#include "AssetPointer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAssetPointer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Asset;
    
    SCORN_API FAssetPointer();
};

