#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "ScornEditableTextBox.generated.h"

UCLASS(Blueprintable)
class SCORN_API UScornEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UScornEditableTextBox();
    UFUNCTION(BlueprintCallable)
    void HandleKeyboardInput(FText TextKey);
    
};

