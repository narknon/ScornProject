#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BabyNPCAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCORN_API UBabyNPCAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnBorn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBorn;
    
public:
    UBabyNPCAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetBorn(bool Born);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimNotify_BirthEnd();
    
};

