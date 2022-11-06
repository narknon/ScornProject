#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorComponent.h"
#include "EuSocialBehaviorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UEuSocialBehaviorComponent : public UAIBehaviorComponent {
    GENERATED_BODY()
public:
    UEuSocialBehaviorComponent();
};

