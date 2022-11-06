#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "PaintActorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UPaintActorComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPaintActorComponent();
};

