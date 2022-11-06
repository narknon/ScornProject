#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "PanelPuzzlePattern.h"
#include "PanelRoomPuzzleController.generated.h"

UCLASS(Blueprintable)
class SCORN_API APanelRoomPuzzleController : public ASavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPanelPuzzlePattern Pattern1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPanelPuzzlePattern Pattern2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPanelPuzzlePattern Pattern3;
    
    APanelRoomPuzzleController();
};

