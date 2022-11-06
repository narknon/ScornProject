#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SaveGameRegionalManager.generated.h"

UCLASS(Abstract, Blueprintable)
class SCORN_API ASaveGameRegionalManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoOfRelevantSavablesInMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingDestroy;
    
public:
    ASaveGameRegionalManager();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetNoOfRelevantSavables();
    
    UFUNCTION(BlueprintCallable)
    void FindNoOfRelevantSavablesInThisLevel();
    
};

