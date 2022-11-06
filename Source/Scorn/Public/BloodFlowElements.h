#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloodFlowElements.generated.h"

class UDecalComponent;

UCLASS(Blueprintable)
class SCORN_API ABloodFlowElements : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
    ABloodFlowElements();
};

