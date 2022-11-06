#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIController.h"
#include "EAttackType.h"
#include "UObject/NoExportTypes.h"
#include "BaseAIController.generated.h"

class UNavigationPath;
class ABaseNPC;
class ABaseAIController;
class UBlackboardData;
class UBehaviorTree;
class UAIPerceptionComponent;
class AAIGroupController;
class UWorldStateComponent;
class UActorComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseAIController : public AAIController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWakeUp, ABaseAIController*, AIController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, ABaseAIController*, AIController);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeathDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseNPC* BaseNPC;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTreeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFakeEnemyPerception;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* AIPerceptionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyVisible;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavigationPath* CurrentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathRefreshRate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIGroupController* GroupController;
    
    ABaseAIController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnemyPerception();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentPath(FVector TargetLocation, bool& IsValid, bool& IsPartial);
    
    UFUNCTION(BlueprintCallable)
    void StopThinking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBlockDetectionParams(float DistThreshold, float Int, int32 NSamples);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResumeThinking();
    
    UFUNCTION(BlueprintCallable)
    void OnCallToArms(ABaseNPC* Ally);
    
    UFUNCTION(BlueprintCallable)
    UNavigationPath* MakePathToLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThinking() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationReachable(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInCone(const FVector& Location, const float& ConeHalfAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyInAttackRange(EAttackType AttackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyInAttackCone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldStateComponent* GetWorldState() const;
    
    UFUNCTION(BlueprintCallable)
    UNavigationPath* GetPathToPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UActorComponent* GetLocationSystemComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugPath(const UNavigationPath* Path, FColor DebugColor);
    
};

