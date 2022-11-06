#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "CollisionData.h"
#include "CollisionDetectionComponent.generated.h"

class ULocomotionPlan;
class UAgentColliderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UCollisionDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeHorizonLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadOnAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCollisionDetection;
    
public:
    UCollisionDetectionComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHeadOnCollision(FVector AgentVelocity, FVector ColliderVelocity, float AngleThreshold) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollisionDetected(UAgentColliderComponent* Agent, ULocomotionPlan* AgentPlan, float AgentSpeedMultiplier, float AgentRadius, FCollisionData& CollisionData) const;
    
};

