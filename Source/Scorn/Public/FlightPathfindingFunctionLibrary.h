#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FlightPathfindingFunctionLibrary.generated.h"

class AFlightNavigationGrid;

UCLASS(Blueprintable)
class SCORN_API UFlightPathfindingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFlightPathfindingFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TransformRelativeAxisLocationToGridCoordinate(const float relativeCellLocation, const float navVolumeExtentInAxis, const int32 axisGridMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TransformGridCoordinateToRelativeAxisLocation(const int32 gridCoordinate, const float navVolumeExtentInAxis, const int32 axisGridMax, const float CellSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGridSizeValid(const FIntVector GridSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector GetCoordinatesInGridForIndex(const int32 IndexInGrid, const FIntVector GridSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetCellWorldLocationForRelativeLocation(const FVector relativeCellLocation, const FTransform navGridTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetCellWorldLocationForCoordinatesInGrid(const FIntVector cellGridCoordinates, const AFlightNavigationGrid* navGridActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetCellRelativeLocationForCoordinatesInGrid(const FIntVector cellGridCoordinates, const AFlightNavigationGrid* navGridActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCellIndexForCoordinates(const FIntVector gridLocation, const FIntVector GridSize);
    
};

