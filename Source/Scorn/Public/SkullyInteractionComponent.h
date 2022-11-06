#pragma once
#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "SkullyInteractionComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API USkullyInteractionComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    USkullyInteractionComponent();
};

