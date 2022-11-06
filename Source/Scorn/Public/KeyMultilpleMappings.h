#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyMultilpleMappings.generated.h"

USTRUCT(BlueprintType)
struct FKeyMultilpleMappings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MappingNames;
    
    SCORN_API FKeyMultilpleMappings();
};

