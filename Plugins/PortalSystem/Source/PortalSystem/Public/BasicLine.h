#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BasicLine.generated.h"

USTRUCT(BlueprintType)
struct PORTALSYSTEM_API FBasicLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    FBasicLine();
};

