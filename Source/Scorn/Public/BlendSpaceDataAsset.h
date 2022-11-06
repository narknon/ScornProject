#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "BlendSpaceDataAsset.generated.h"

class UBlendSpaceBase;

UCLASS(Abstract, Blueprintable)
class SCORN_API UBlendSpaceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UBlendSpaceDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetMaxPositionOffsets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetBlendSpaceMaxPositionOffset(const UBlendSpaceBase* BlendSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBlendSpaceBase* GetBlendSpace(float BlendParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckForErrors();
    
    UFUNCTION(BlueprintCallable)
    void CheckBlendSpaceForErrors(const UBlendSpaceBase* BlendSpace);
    
};

