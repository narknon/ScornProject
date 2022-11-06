#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture2DDynamic.h"
#include "Engine/Texture.h"
#include "SubstanceTexture2D.generated.h"

class USubstanceGraphInstance;

UCLASS(Blueprintable)
class SUBSTANCECORE_API USubstanceTexture2D : public UTexture2DDynamic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubstanceGraphInstance* ParentInstance;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooked;
    
    USubstanceTexture2D();
};

