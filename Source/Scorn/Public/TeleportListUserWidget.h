#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TeleportListUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SCORN_API UTeleportListUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TeleportList;
    
public:
    UTeleportListUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateListView();
    
};

