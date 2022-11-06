#pragma once
#include "CoreMinimal.h"
#include "DirectionalLightDefaultProperties.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalLightDefaultProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Channel0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Channel1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Channel2;
    
    SCORN_API FDirectionalLightDefaultProperties();
};

