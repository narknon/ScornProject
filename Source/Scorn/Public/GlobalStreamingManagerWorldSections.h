#pragma once
#include "CoreMinimal.h"
#include "GlobalStreamingManager.h"
#include "GlobalStreamingManagerWorldSections.generated.h"

UCLASS(Blueprintable)
class SCORN_API AGlobalStreamingManagerWorldSections : public AGlobalStreamingManager {
    GENERATED_BODY()
public:
    AGlobalStreamingManagerWorldSections();
    UFUNCTION(BlueprintCallable)
    void ScanForAndRegisterAllStreamingManagers();
    
};

