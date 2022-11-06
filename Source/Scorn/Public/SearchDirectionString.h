#pragma once
#include "CoreMinimal.h"
#include "SearchDirectionString.generated.h"

UENUM(BlueprintType)
enum class SearchDirectionString : uint8 {
    N,
    NE,
    E,
    SE,
    S,
    SW,
    W,
    NW,
    X,
};

