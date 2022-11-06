#pragma once
#include "CoreMinimal.h"
#include "BaseAIController.h"
#include "UObject/NoExportTypes.h"
#include "EuHeadAIController.generated.h"

UCLASS(Blueprintable)
class SCORN_API AEuHeadAIController : public ABaseAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CanMoveKey;
    
    AEuHeadAIController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMoveToLocation(FVector MoveToLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCanMove(bool CanMove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FollowPathSegment(float dt);
    
};

