#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwitcherDataAsset.generated.h"

class UWorld;
class AActor;

UCLASS(Blueprintable)
class SCORN_API USwitcherDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SourceMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ActorsToSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> BeforeChangeActorsToSwitch;
    
    USwitcherDataAsset();
    UFUNCTION(BlueprintCallable)
    void RemoveAll();
    
};

