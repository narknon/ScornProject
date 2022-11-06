#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelStreamingDataAsset.generated.h"

class UWorld;

UCLASS(Blueprintable)
class SCORN_API ULevelStreamingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> LevelsToStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> BeforeChangeLevelsToStream;
    
    ULevelStreamingDataAsset();
};

