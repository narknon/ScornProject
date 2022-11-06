#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EInfiniteElevatorDirection.h"
#include "ExponentialHeightFogKeyProps.h"
#include "SkyLightKeyProps.h"
#include "Engine/Scene.h"
#include "WorldSectionLink.generated.h"

USTRUCT(BlueprintType)
struct FWorldSectionLink {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 LinkedSectionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InfiniteElevatorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInfiniteElevatorDirection ElevatorMoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExponentialHeightFogKeyProps HeightFogProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyLightKeyProps SkylightProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnLoad;
    
    SCORN_API FWorldSectionLink();
};

