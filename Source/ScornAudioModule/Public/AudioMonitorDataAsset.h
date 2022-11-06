#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AudioMonitorDataAsset.generated.h"

UCLASS(Blueprintable)
class SCORNAUDIOMODULE_API UAudioMonitorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MainBusesPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VCAPaths;
    
    UAudioMonitorDataAsset();
};

