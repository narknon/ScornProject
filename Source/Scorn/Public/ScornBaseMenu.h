#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ScornBaseMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SCORN_API UScornBaseMenu : public UUserWidget {
    GENERATED_BODY()
public:
    UScornBaseMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void LoadHardSave(int32 SaveIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsHardSaveSaved(int32 SaveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNoOfHardSaves();
    
    UFUNCTION(BlueprintCallable)
    FDateTime GetHardSaveTime(int32 SaveIndex);
    
};

