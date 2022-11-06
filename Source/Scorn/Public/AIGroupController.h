#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIGroupController.generated.h"

class ABaseAIController;

UCLASS(Blueprintable)
class SCORN_API AAIGroupController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABaseAIController*> Members;
    
public:
    AAIGroupController();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroupAggressive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGroupEnemy() const;
    
};

