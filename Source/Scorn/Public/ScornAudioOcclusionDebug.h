#pragma once
#include "CoreMinimal.h"
#include "ScornAudioLineTraceDebug.h"
#include "ScornAudioOcclusionDebug.generated.h"

USTRUCT(BlueprintType)
struct FScornAudioOcclusionDebug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScornAudioLineTraceDebug LineTrace;
    
    SCORN_API FScornAudioOcclusionDebug();
};

