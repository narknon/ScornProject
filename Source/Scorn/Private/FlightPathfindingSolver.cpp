#include "FlightPathfindingSolver.h"

class AFlightNavigationGrid;

void AFlightPathfindingSolver::UnregisterNavigationGrid(AFlightNavigationGrid* NavigationGrid) {
}

void AFlightPathfindingSolver::RegisterNavigationGrid(AFlightNavigationGrid* NavigationGrid) {
}

bool AFlightPathfindingSolver::ProjectPointTo3dNavigation(const FVector& LocationToProject, const float MaxDistanceToProjection, FVector& ProjectedLocation, FNavCell& NavigationCell) const {
    return false;
}

TArray<FNavCell> AFlightPathfindingSolver::GetNeighbouringCells(const FNavCell InStruct) const {
    return TArray<FNavCell>();
}

TArray<FVector> AFlightPathfindingSolver::Find3dPath(const FVector fromLocation, const FVector toLocation, const bool useComplexSearch, const float ProjectionTolerance) {
    return TArray<FVector>();
}

float AFlightPathfindingSolver::DiagonalDistance(const FIntVector fromCell, const FIntVector toCell) const {
    return 0.0f;
}

AFlightPathfindingSolver::AFlightPathfindingSolver() {
}

