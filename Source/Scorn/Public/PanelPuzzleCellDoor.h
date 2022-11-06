#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PanelPuzzleCellDoor.generated.h"

UCLASS(Blueprintable)
class SCORN_API APanelPuzzleCellDoor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveRandomly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPoweredOn;
    
public:
    APanelPuzzleCellDoor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryMove();
    
};

