#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "MainCharacterTriggerHub.generated.h"

class AMainCharacterTrigger;
class AScornCharacter;

UCLASS(Blueprintable)
class SCORN_API AMainCharacterTriggerHub : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlapWithCharacter, AScornCharacter*, Character);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapWithCharacter OverlapBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapWithCharacter OverlapEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMainCharacterTrigger*> Triggers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
public:
    AMainCharacterTriggerHub();
    UFUNCTION(BlueprintCallable)
    void ResetHub();
    
    UFUNCTION(BlueprintCallable)
    void HandleOverlapEnd(AMainCharacterTrigger* Trigger, AScornCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void HandleOverlapBegin(AMainCharacterTrigger* Trigger, AScornCharacter* Character);
    
};

