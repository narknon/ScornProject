#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavCell.h"
#include "FlightPathfindingSolver.generated.h"

class AFlightNavigationGrid;

UCLASS(Blueprintable)
class SCORN_API AFlightPathfindingSolver : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFlightNavigationGrid*> NavigationGrids;
    
    AFlightPathfindingSolver();
    UFUNCTION(BlueprintCallable)
    void UnregisterNavigationGrid(AFlightNavigationGrid* NavigationGrid);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNavigationGrid(AFlightNavigationGrid* NavigationGrid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectPointTo3dNavigation(const FVector& LocationToProject, const float MaxDistanceToProjection, FVector& ProjectedLocation, FNavCell& NavigationCell) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FNavCell> GetNeighbouringCells(const FNavCell InStruct) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> Find3dPath(const FVector fromLocation, const FVector toLocation, const bool useComplexSearch, const float ProjectionTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DiagonalDistance(const FIntVector fromCell, const FIntVector toCell) const;
    
};

