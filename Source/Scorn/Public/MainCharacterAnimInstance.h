#pragma once
#include "CoreMinimal.h"
#include "ECharacterState.h"
#include "EUseFailAnimation.h"
#include "ScornAnimInstance.h"
#include "ItemUseData.h"
#include "EScornConsoleType.h"
#include "MainCharacterAnimInstance.generated.h"

class AScornCharacter;

UCLASS(Blueprintable, NonTransient)
class SCORN_API UMainCharacterAnimInstance : public UScornAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamDelegate);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate UseEndAnimEndDelegate;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate UseStartAnimEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate ItemTakeFromWorldDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate ItemLeaveInWorldDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate ItemLeaveInParasiteHandDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate ItemTakeFromParasiteHandDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate ConsoleKeyInsertedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUseFailAnimation CurrentUseFailAnim;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUseData ItemUseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScornConsoleType ConsoleTypeInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScornCharacter* MyCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState CharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpperBodyIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCrouching;
    
public:
    UMainCharacterAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void SetUpperBodyIdle(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostMainCharacterTick();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutopilotStart(bool isStartUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutopilotEnd(bool isStartUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsReadyToUseObject();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ItemTakeFromWorld();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ItemTakeFromParasiteHand();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ItemLeaveInWorld();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ItemLeaveInParasiteHand();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_ConsoleKeyInserted();
    
};

