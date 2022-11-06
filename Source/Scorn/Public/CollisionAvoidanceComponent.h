#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollisionAvoidanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UCollisionAvoidanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCollisionAvoidanceComponent();
};

