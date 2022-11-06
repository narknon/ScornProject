#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BasicLine.h"
#include "PortalSystemZone.generated.h"

class APortalSystemPortal;
class ULightComponent;

UCLASS(Abstract, Blueprintable)
class PORTALSYSTEM_API APortalSystemZone : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox _box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> _points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicLine> _lines;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> Lights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APortalSystemPortal*> Portals;
    
    APortalSystemZone();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneVisibilityChange(bool newVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainPoint(const FVector& Point) const;
    
};

