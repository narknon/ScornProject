#pragma once
#include "CoreMinimal.h"
#include "BaseHealthController.h"
#include "DestructibleHealthController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDestructibleHealthController : public UBaseHealthController {
    GENERATED_BODY()
public:
    UDestructibleHealthController();
};

