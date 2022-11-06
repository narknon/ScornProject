#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "EuHeadPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UEuHeadPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UEuHeadPathFollowingComponent();
};

