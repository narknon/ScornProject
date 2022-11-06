#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EventInstanceInfo.h"
#include "BaseAudioMonitorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SCORNAUDIOMODULE_API UBaseAudioMonitorWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ItemList;
    
public:
    UBaseAudioMonitorWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateItemList(const FString& Pattern, TArray<FString> List);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetItemList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleClearList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAppendEventOnList(FEventInstanceInfo EventInfo);
    
};

