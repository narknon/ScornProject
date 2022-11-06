#pragma once
#include "CoreMinimal.h"
#include "BaseHealthController.h"
#include "EHealthState.h"
#include "MainCharacterHealthController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UMainCharacterHealthController : public UBaseHealthController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthStateChangeDelegate, EHealthState, NewHealthState);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarDamageSmoothingPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthBarHealingSmoothingPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TempHealth;
    
    UMainCharacterHealthController();
    UFUNCTION(BlueprintCallable)
    void SetHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetGodMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RestoreHealth(float InRestoreAmount);
    
    UFUNCTION(BlueprintCallable)
    void OverrideHealthBarDamageSmoothingPeriod(bool bOverride, float OverrideValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHealthState GetHealthState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMaxHealth() const;
    
};

