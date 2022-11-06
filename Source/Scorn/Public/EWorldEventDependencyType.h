#pragma once
#include "CoreMinimal.h"
#include "EWorldEventDependencyType.generated.h"

UENUM(BlueprintType)
enum class EWorldEventDependencyType : uint8 {
    HardDependency,
    SoftDependency,
};

