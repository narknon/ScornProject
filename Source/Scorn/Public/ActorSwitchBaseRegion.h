#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "UObject/NoExportTypes.h"
#include "ESwitchType.h"
#include "ActorSwitchBaseRegion.generated.h"

class AActorSwitchBaseRegion;
class UBillboardComponent;

UCLASS(Blueprintable)
class SCORN_API AActorSwitchBaseRegion : public ASavableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSwitchingEnd, AActorSwitchBaseRegion*, SwitchRegion);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDebugPropertiesChange);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugPropertiesChange OnDebugPropertiesChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchingEnd OnSwitchingEndDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor RegionDebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsSwitchedOn;
    
public:
    AActorSwitchBaseRegion();
protected:
    UFUNCTION(BlueprintCallable)
    void TurnDebugDrawOn();
    
    UFUNCTION(BlueprintCallable)
    void TurnDebugDrawOff();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchActorsCustomDuration(const bool& SwitchOn, const float& OverrideDuration);
    
    UFUNCTION(BlueprintCallable)
    void SwitchActors(const bool& SwitchOn, const ESwitchType& SwitchType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchActors(bool SwitchOn);
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetRegionStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRegionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetRegionDebugColor() const;
    
};

