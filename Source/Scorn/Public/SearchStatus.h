#pragma once
#include "CoreMinimal.h"
#include "SearchStatus.generated.h"

UENUM(BlueprintType)
enum class SearchStatus : uint8 {
    Status_NewPoint,
    Status_Forward,
    Status_Backward,
    Status_Edge_Forward,
    Status_Edge_Backward,
    Status_Boundry_Forward,
    Status_Boundry_Backward,
    Status_Extended_Edges_Forward,
    Status_Extended_Edges_Backward,
    Status_MAX UMETA(Hidden),
};

