#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorComponent.h"
#include "SkullyBehaviorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API USkullyBehaviorComponent : public UAIBehaviorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDelay;
    
public:
    USkullyBehaviorComponent();
};

