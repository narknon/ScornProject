#include "FlightNavigationGrid.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;
class AFlightPathfindingSolver;

void AFlightNavigationGrid::UnRegisterVolumeToPathfindingSolver() {
}

void AFlightNavigationGrid::RegisterVolumeToPathfindingSolver() {
}

void AFlightNavigationGrid::OnNavVolumeBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}




bool AFlightNavigationGrid::IsLocationWithinVolume(const FVector Location) const {
    return false;
}

bool AFlightNavigationGrid::IsLocationOcupiedByDynamic(FTransform InTransform) {
    return false;
}

bool AFlightNavigationGrid::IsGridFullyGenerated() const {
    return false;
}

bool AFlightNavigationGrid::IsComponentADynamicBlocker(UPrimitiveComponent* comp) {
    return false;
}

bool AFlightNavigationGrid::IsCellOcupiedByDynamic(const FNavCell cell) {
    return false;
}

void AFlightNavigationGrid::GridGenerated() {
}

int32 AFlightNavigationGrid::GetTotalGridSize() const {
    return 0;
}

AFlightPathfindingSolver* AFlightNavigationGrid::GetOrSpawnNavigationSolver() {
    return NULL;
}

bool AFlightNavigationGrid::GetCellForWorldLocation(const FVector& LocationToProject, FVector& ProjectedLocation, FNavCell& NavigationCell) const {
    return false;
}

TArray<AActor*> AFlightNavigationGrid::GetActorsToIgnoreForCollision() {
    return TArray<AActor*>();
}

void AFlightNavigationGrid::GenerateGrid(const bool bOnMainThread) {
}

AFlightNavigationGrid::AFlightNavigationGrid() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->NavVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("NavVolume"));
    this->IteratorCell = CreateDefaultSubobject<UBoxComponent>(TEXT("IteratorCell"));
    this->CellSize = 60.00f;
    this->bVolumeUpdatesDynamicCollision = true;
}

