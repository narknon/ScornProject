#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "UObject/NoExportTypes.h"
#include "AgentColliderComponent.generated.h"

class ULocomotionPlan;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UAgentColliderComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocomotionPlan* AgentPlan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAnimSpeed;
    
public:
    UAgentColliderComponent();
    UFUNCTION(BlueprintCallable)
    void StartMoving();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedMultiplier(float InSpeedMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform PredictTransform(float DeltaSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedMultiplier() const;
    
};

