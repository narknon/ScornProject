#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AutopilotComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UAutopilotComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAutopilotComponent();
    UFUNCTION(BlueprintCallable)
    void StopAutopilot();
    
    UFUNCTION(BlueprintCallable)
    void StartAutopilot(FVector InEndLocation, FRotator InEndRotation, float InDuration);
    
};

