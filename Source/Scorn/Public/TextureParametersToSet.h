#pragma once
#include "CoreMinimal.h"
#include "StructTextureToSet.h"
#include "Engine/DataAsset.h"
#include "TextureParametersToSet.generated.h"

UCLASS(Blueprintable)
class SCORN_API UTextureParametersToSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructTextureToSet> TextureToSet;
    
    UTextureParametersToSet();
};

