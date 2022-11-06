#pragma once
#include "CoreMinimal.h"
#include "BaseSoundAnimNotify.h"
#include "SoundAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SCORN_API USoundAnimNotify : public UBaseSoundAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    USoundAnimNotify();
};

