#pragma once
#include "CoreMinimal.h"
#include "LogEvent.generated.h"

USTRUCT(BlueprintType)
struct FLogEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventTime;
    
    SCORN_API FLogEvent();
};

