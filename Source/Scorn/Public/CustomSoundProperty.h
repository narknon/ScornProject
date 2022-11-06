#pragma once
#include "CoreMinimal.h"
#include "CustomSoundProperty.generated.h"

USTRUCT(BlueprintType)
struct FCustomSoundProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropertyValue;
    
    SCORN_API FCustomSoundProperty();
};

