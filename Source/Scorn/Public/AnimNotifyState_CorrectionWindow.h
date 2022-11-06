#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_CorrectionWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SCORN_API UAnimNotifyState_CorrectionWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingWindowTime;
    
public:
    UAnimNotifyState_CorrectionWindow();
};

