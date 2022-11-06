#pragma once
#include "CoreMinimal.h"
#include "EHighlightState.h"
#include "Components/MaterialBillboardComponent.h"
#include "HighlightIcon.generated.h"

class UDataTable;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UHighlightIcon : public UMaterialBillboardComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* IconMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHighlightState HighlightState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HighlightAnimIntervalTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HighlightAnimColorTable;
    
public:
    UHighlightIcon();
    UFUNCTION(BlueprintCallable)
    void SetHighlightState(const EHighlightState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool Enabled);
    
};

