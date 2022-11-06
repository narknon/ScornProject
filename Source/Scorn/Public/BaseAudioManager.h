#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableActor.h"
#include "DelegateOnTravelCrossOverEndDelegate.h"
#include "BaseAudioManager.generated.h"

class ABaseMusicMananger;
class ASpatialCompoundZoneTrigger;

UCLASS(Blueprintable)
class SCORN_API ABaseAudioManager : public ASavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateOnTravelCrossOverEnd DelegateOnTravelCrossOverEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseMusicMananger> MusicManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseMusicMananger* MusicManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpatialCompoundZoneTrigger* LastOverlappedTrigger;
    
public:
    ABaseAudioManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTravelCrossOver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseMusicMananger* GetMusicManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCurrentBanksLoaded() const;
    
};

