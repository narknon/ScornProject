#pragma once
#include "CoreMinimal.h"
#include "BaseSpatialTrigger.h"
#include "SpatialCompoundZoneTrigger.generated.h"

class ASpatialCompoundZone;

UCLASS(Abstract, Blueprintable)
class SCORN_API ASpatialCompoundZoneTrigger : public ABaseSpatialTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpatialCompoundZone* ParentZone;
    
public:
    ASpatialCompoundZoneTrigger();
    UFUNCTION(BlueprintCallable)
    void SetParentZone(ASpatialCompoundZone* inParentZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASpatialCompoundZone* GetParentZone() const;
    
};

