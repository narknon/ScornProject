#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "DestructibleObject.h"
#include "UObject/NoExportTypes.h"
#include "EMovementState.h"
#include "ESpecialAttackType.h"
#include "BaseCharacter.generated.h"

class UBaseHealthController;
class ABaseCharacter;

UCLASS(Blueprintable)
class SCORN_API ABaseCharacter : public ACharacter, public IDestructibleObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseHealthController* HealthController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFlyingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JogSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementState MoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseCrawlSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootstepDistanceTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunshotDistanceTreshold;
    
    ABaseCharacter();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldSkipLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAsMobile();
    
    UFUNCTION(BlueprintCallable)
    void SetAsImmobile();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostLoadSetPositionAndRotation(const FVector& Position, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostLoadJsonVars();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitReceive(float Damage, FVector HitVector, ACharacter* DamageDealer, ESpecialAttackType SpecialAttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable)
    void HandleHit(float Damage, FVector HitVector, ACharacter* DamageDealer, ESpecialAttackType SpecialAttackType);
    
    UFUNCTION(BlueprintCallable)
    void HandleDeath(ABaseCharacter* BaseCharacter);
    
    
    // Fix for true pure virtual functions not being implemented
};

