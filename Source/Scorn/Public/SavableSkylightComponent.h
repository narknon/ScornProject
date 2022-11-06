#pragma once
#include "CoreMinimal.h"
#include "Components/SkyLightComponent.h"
#include "SavableSkylightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API USavableSkylightComponent : public USkyLightComponent {
    GENERATED_BODY()
public:
    USavableSkylightComponent();
};

