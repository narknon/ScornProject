#pragma once
#include "CoreMinimal.h"
#include "Components/DirectionalLightComponent.h"
#include "SavableDirectionalLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API USavableDirectionalLightComponent : public UDirectionalLightComponent {
    GENERATED_BODY()
public:
    USavableDirectionalLightComponent();
};

