#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIBehaviorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UAIBehaviorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggressiveEnterRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertEnterRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertExitRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumVerticalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAggressionTimeLimit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBehaviorRanges;
    
public:
    UAIBehaviorComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnemyUnreachable(bool bUnreachable);
    
    UFUNCTION(BlueprintCallable)
    void NotifyThreatenFinished();
    
    UFUNCTION(BlueprintCallable)
    void NotifyLostEnemy();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumVerticalDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlertExitRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAlertEnterRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAggressiveEnterRange() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceAggressive();
    
};

