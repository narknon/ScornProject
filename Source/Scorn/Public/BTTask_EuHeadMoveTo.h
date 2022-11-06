#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTask_EuHeadMoveTo.generated.h"

UCLASS(Blueprintable)
class SCORN_API UBTTask_EuHeadMoveTo : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UBTTask_EuHeadMoveTo();
};

