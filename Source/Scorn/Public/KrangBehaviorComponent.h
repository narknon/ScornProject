#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorComponent.h"
#include "KrangBehaviorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UKrangBehaviorComponent : public UAIBehaviorComponent {
    GENERATED_BODY()
public:
    UKrangBehaviorComponent();
};

