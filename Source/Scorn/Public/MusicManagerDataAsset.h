#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicManagerDataAsset.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class SCORN_API UMusicManagerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatStateParameterName;
    
    UMusicManagerDataAsset();
};

