#pragma once
#include "CoreMinimal.h"
#include "ScornDirectionalLight.h"
#include "DirectionalLightSources.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalLightSources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornDirectionalLight DirectionalLight;
    
    SCORN_API FDirectionalLightSources();
};

