#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "WorldSectionManager.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class SCORN_API AWorldSectionManager : public ASavableActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoParamDelegate);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamDelegate OnLevelsLoaded;
    
    AWorldSectionManager();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllLevelsUnloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllLevelsLoadedAndVisible(TArray<ULevelStreaming*> StreamingLevels) const;
    
};

