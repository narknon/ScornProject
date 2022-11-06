#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "JerkJuiceItem.generated.h"

UCLASS(Blueprintable)
class UJerkJuiceItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JuiceLevel;
    
public:
    UJerkJuiceItem();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetJuiceLevel(float Level);
    
};

