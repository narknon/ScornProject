#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HeartTubeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCORN_API UHeartTubeAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimEnd, bool, Expanded);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimEnd AnimEndDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    UHeartTubeAnimInstance();
    UFUNCTION(BlueprintCallable)
    void Retract();
    
    UFUNCTION(BlueprintCallable)
    void Init(bool Expanded);
    
    UFUNCTION(BlueprintCallable)
    void Expand();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimNotify_AnimEnd();
    
};

