#pragma once
#include "CoreMinimal.h"
#include "ScornDirectionalLight.generated.h"

class ADirectionalLightTemplate;

USTRUCT(BlueprintType)
struct FScornDirectionalLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLightTemplate* StartDirectionalLightTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
    SCORN_API FScornDirectionalLight();
};

