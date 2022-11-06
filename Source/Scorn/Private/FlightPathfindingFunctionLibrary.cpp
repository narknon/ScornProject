#include "FlightPathfindingFunctionLibrary.h"

class AFlightNavigationGrid;

int32 UFlightPathfindingFunctionLibrary::TransformRelativeAxisLocationToGridCoordinate(const float relativeCellLocation, const float navVolumeExtentInAxis, const int32 axisGridMax) {
    return 0;
}

float UFlightPathfindingFunctionLibrary::TransformGridCoordinateToRelativeAxisLocation(const int32 gridCoordinate, const float navVolumeExtentInAxis, const int32 axisGridMax, const float CellSize) {
    return 0.0f;
}

bool UFlightPathfindingFunctionLibrary::IsGridSizeValid(const FIntVector GridSize) {
    return false;
}

FIntVector UFlightPathfindingFunctionLibrary::GetCoordinatesInGridForIndex(const int32 IndexInGrid, const FIntVector GridSize) {
    return FIntVector{};
}

FVector UFlightPathfindingFunctionLibrary::GetCellWorldLocationForRelativeLocation(const FVector relativeCellLocation, const FTransform navGridTransform) {
    return FVector{};
}

FVector UFlightPathfindingFunctionLibrary::GetCellWorldLocationForCoordinatesInGrid(const FIntVector cellGridCoordinates, const AFlightNavigationGrid* navGridActor) {
    return FVector{};
}

FVector UFlightPathfindingFunctionLibrary::GetCellRelativeLocationForCoordinatesInGrid(const FIntVector cellGridCoordinates, const AFlightNavigationGrid* navGridActor) {
    return FVector{};
}

int32 UFlightPathfindingFunctionLibrary::GetCellIndexForCoordinates(const FIntVector gridLocation, const FIntVector GridSize) {
    return 0;
}

UFlightPathfindingFunctionLibrary::UFlightPathfindingFunctionLibrary() {
}

