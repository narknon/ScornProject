#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EmptyRenderableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PORTALSYSTEM_API UEmptyRenderableComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UEmptyRenderableComponent();
};

