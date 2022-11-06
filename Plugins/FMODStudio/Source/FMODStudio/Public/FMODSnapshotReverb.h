#pragma once
#include "CoreMinimal.h"
#include "Sound/ReverbEffect.h"
#include "UObject/NoExportTypes.h"
#include "FMODSnapshotReverb.generated.h"

UCLASS(Blueprintable)
class FMODSTUDIO_API UFMODSnapshotReverb : public UReverbEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AssetGuid;
    
    UFMODSnapshotReverb();
};

