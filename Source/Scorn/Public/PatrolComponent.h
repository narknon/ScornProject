#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolPoint.h"
#include "UObject/NoExportTypes.h"
#include "PatrolComponent.generated.h"

class ANPC_LocationObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UPatrolComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCircularPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPatrolOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPatrolCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPatrolCooldown;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnterHoleOnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolPoint> PatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisengageCooldown;
    
    UPatrolComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldTeleport(ANPC_LocationObject*& OutTeleportLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void SetPatrolCooldown(float InCooldown);
    
    UFUNCTION(BlueprintCallable)
    void ResetPatrolCooldown();
    
    UFUNCTION(BlueprintCallable)
    void IncrementPatrolPointIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPatrolPoint GetNextPatrolPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPatrolPointIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawPatrolPath(float SphereRadius, FVector Offset, float Duration, float Thickness);
    
};

