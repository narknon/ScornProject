#pragma once
#include "CoreMinimal.h"
#include "SavableActor.h"
#include "RailLink.h"
#include "ESplinePosition.h"
#include "Rail.generated.h"

class USplineComponent;
class ARail;

UCLASS(Abstract, Blueprintable)
class SCORN_API ARail : public ASavableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool RailActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRailLink> LinkedRailsOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRailLink> LinkedRailsOnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomatic;
    
public:
    ARail();
protected:
    UFUNCTION(BlueprintCallable)
    void SnapSplineEndpointsToLinks();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutomatic(bool bInAutomatic);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRailLink(ARail* Rail, ESplinePosition LinkPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutomatic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 HasRailLink(ARail* Rail, ESplinePosition LinkPosition) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetValidRailLink(FRailLink& OutLink, ESplinePosition PositionOnSpline);
    
    UFUNCTION(BlueprintCallable)
    float GetLength();
    
    UFUNCTION(BlueprintCallable)
    float GetDistanceOnRailAtPoint(int32 PointIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearRailLinks(ESplinePosition LinkPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddRailLink(ARail* Rail, ESplinePosition LinkPosition, ESplinePosition PositionOnLinkedRail);
    
};

