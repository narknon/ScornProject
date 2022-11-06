#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BaseSpatialTrigger.generated.h"

class UBoxComponent;
class ABaseSpatialTrigger;
class AActor;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class SCORN_API ABaseSpatialTrigger : public ASavableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapEnd, ABaseSpatialTrigger*, Trigger, AActor*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapBegin, ABaseSpatialTrigger*, Trigger, AActor*, Character);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapBegin OverlapBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapEnd OverlapEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoxOpacity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
public:
    ABaseSpatialTrigger();
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebug(bool EnableDebug);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    UBoxComponent* GetBoxComponent();
    
};

