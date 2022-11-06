#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ActorSwitchTriggerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UActorSwitchTriggerComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchedOn EventOnSwitchedOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchedOn EventOnSwitchedOff;
    
    UActorSwitchTriggerComponent();
};

