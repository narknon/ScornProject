#pragma once
#include "CoreMinimal.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "SavableExponentialFogComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API USavableExponentialFogComponent : public UExponentialHeightFogComponent {
    GENERATED_BODY()
public:
    USavableExponentialFogComponent();
};

