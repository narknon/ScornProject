#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EScornSplineType.h"
#include "ScornSpline.generated.h"

class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class SCORN_API AScornSpline : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScornSplineType SplineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLightMapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapResolutionDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedStartCapCapOverrideResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedEndCapOverrideResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CachedOverideResolutions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverrideResCacheCleard;
    
    AScornSpline();
    UFUNCTION(BlueprintCallable)
    static void set_rotation_at_spline_point(USplineComponent* Target, const int32 point_index, const FRotator Rotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void OverrideLightMapResolutionForComponent(UStaticMeshComponent* Component, int32 Resolution, bool bOverride);
    
public:
    UFUNCTION(BlueprintCallable)
    static FRotator GetSplineRotations(USplineComponent* Target, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConstructionDone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearCachedOverrideResolutions();
    
};

