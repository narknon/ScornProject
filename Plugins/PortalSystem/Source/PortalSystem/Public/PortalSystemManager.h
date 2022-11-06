#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PortalZonesGrid.h"
#include "PortalSystemManager.generated.h"

class ULightComponent;
class APortalSystemPortal;
class APortalSystemManager;
class APortalSystemZone;
class UPortalSystemOccluderComponent;
class UObject;

UCLASS(Abstract, Blueprintable)
class PORTALSYSTEM_API APortalSystemManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _occluderInitHasStarted;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPortalZonesGrid Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APortalSystemPortal*> Portals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APortalSystemPortal*> OutsidePortals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APortalSystemZone*> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULightComponent*, APortalSystemZone*> LightToZoneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPortalSystemOccluderComponent*> Occluders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<APortalSystemZone*> LastRenderedZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableOptimisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableOptimisationInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManualRebuildOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateForAllViewLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogWarningsOnRebuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogVerboseWarnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogGlobalInfosOfInternalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogVerboseInfosOfInternalState;
    
    APortalSystemManager();
    UFUNCTION(BlueprintCallable)
    void RegisterOccluder(UPortalSystemOccluderComponent* occluder);
    
    UFUNCTION(BlueprintCallable)
    void RebuildPortalSystemData(bool fromBeginPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZonesVisibilityChanged(const TArray<APortalSystemZone*>& zonesNewlyEnabled, const TArray<APortalSystemZone*>& zonesNewlyDisabled);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLightMoved(ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APortalSystemManager* GetPortalSystemManagerInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdatePortalSystem();
    
    UFUNCTION(BlueprintCallable)
    void AddLightFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddLight(ULightComponent* LightComponent);
    
};

