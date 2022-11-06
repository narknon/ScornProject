#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "ECompositeKeyPart.h"
#include "CompositeKey.generated.h"

UCLASS(Blueprintable)
class SCORN_API UCompositeKey : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECompositeKeyPart> ContainedParts;
    
public:
    UCompositeKey();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartAdded(ECompositeKeyPart Part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPart(ECompositeKeyPart Part) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPart(ECompositeKeyPart Part);
    
};

