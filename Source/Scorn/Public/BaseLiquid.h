#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELiquidType.h"
#include "BaseLiquid.generated.h"

class UDecalComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseLiquid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiquidType LiquidType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
public:
    ABaseLiquid();
};

