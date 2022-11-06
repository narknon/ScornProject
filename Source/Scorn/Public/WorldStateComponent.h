#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ENPCLocationType.h"
#include "EBehaviorType.h"
#include "WorldStateComponent.generated.h"

class ANPC_LocationObject;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UWorldStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWorldStateComponent();
    UFUNCTION(BlueprintCallable)
    void SetTargetOrientation(FRotator TargetOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationObject(ANPC_LocationObject* InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetScriptTriggered(bool bTriggered);
    
    UFUNCTION(BlueprintCallable)
    void SetScripted(bool bScripted);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousLocationObject(ANPC_LocationObject* InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetNextWaypoint(FVector NextWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationType(ENPCLocationType LocationType);
    
    UFUNCTION(BlueprintCallable)
    void SetIdle(bool bIdle);
    
    UFUNCTION(BlueprintCallable)
    void SetHomeLocation(FVector HomeLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetHitReaction(bool bHitReaction);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(float Health);
    
    UFUNCTION(BlueprintCallable)
    void SetEnteredHole(bool bEnteredHole);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyLocation(FVector EnemyLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemy(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLocation(ANPC_LocationObject* InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCanInterruptScript(bool bCanInterruptScript);
    
    UFUNCTION(BlueprintCallable)
    void SetBehaviorType(EBehaviorType BehaviorType);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackLocation(FVector AttackLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetAmmoCount(int32 AmmoCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScriptTriggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScripted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnteredHole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetTargetOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANPC_LocationObject* GetTargetLocationObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANPC_LocationObject* GetPreviousLocationObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNextWaypoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPCLocationType GetLocationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEnemyLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANPC_LocationObject* GetCurrentLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanInterruptScript() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBehaviorType GetBehaviorType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAttackLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCount() const;
    
};

