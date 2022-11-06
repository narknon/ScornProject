#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ESpecialAttackType.h"
#include "UObject/NoExportTypes.h"
#include "BaseHealthController.generated.h"

class ACharacter;
class ABaseCharacter;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UBaseHealthController : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthModified, float, AmountModified);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, ABaseCharacter*, BaseCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthModified OnHealthModifiedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthChanged OnHealthChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeathDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Dead;
    
public:
    UBaseHealthController();
    UFUNCTION(BlueprintCallable)
    void ForceSetDead();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(float Damage, FVector HitVector, ACharacter* DamageDealer, ESpecialAttackType SpecialAttackType);
    
};

