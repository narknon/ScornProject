#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "DebugInputBindingData.generated.h"

USTRUCT(BlueprintType)
struct FDebugInputBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey PressedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey ReleasedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    SCORN_API FDebugInputBindingData();
};

