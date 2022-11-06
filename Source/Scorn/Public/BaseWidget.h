#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "BaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SCORN_API UBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBaseWidget();
    UFUNCTION(BlueprintCallable)
    void OpenConsoleIfTilde(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNonMouseKeyPress(FGeometry InGeometry, FKeyEvent KeyEvent, bool IsRepeat);
    
};

