#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LogSource.generated.h"

USTRUCT(BlueprintType)
struct FLogSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DrawColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    SCORN_API FLogSource();
};

