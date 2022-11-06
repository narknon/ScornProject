#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimBehaviorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UAnimBehaviorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAnimBehaviorComponent();
};

