#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScornAudioBanksDataAsset.generated.h"

class UFMODBank;

UCLASS(Blueprintable)
class SCORNAUDIOMODULE_API UScornAudioBanksDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBank*> Banks;
    
    UScornAudioBanksDataAsset();
};

