#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ScornAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCORN_API UScornAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimEnd);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimStart AnimStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimEnd AnimEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStateLocked;
    
    UScornAnimInstance();
    UFUNCTION(BlueprintCallable)
    void UnlockState();
    
    UFUNCTION(BlueprintCallable)
    void LockState();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_UnlockState();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_LockState();
    
};

