#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDamageType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESpecialAttackType.h"
#include "EWeapons.h"
#include "DestructibleObject.generated.h"

class ACharacter;

UINTERFACE(Blueprintable)
class SCORN_API UDestructibleObject : public UInterface {
    GENERATED_BODY()
};

class SCORN_API IDestructibleObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Push(FVector ForceVector);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetShotgunTraceableLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyDamage(const FHitResult& HitResult, float Damage, EDamageType DamageType, EWeapons WeaponType, ACharacter* DamageDealer, ESpecialAttackType SpecialAttackType);
    
};

