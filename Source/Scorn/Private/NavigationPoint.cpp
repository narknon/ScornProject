#include "NavigationPoint.h"
#include "Components/StaticMeshComponent.h"

class UArrowComponent;

void ANavigationPoint::SetArrowComponent(UArrowComponent* ArrowComponentToSet) {
}

ANavigationPoint::ANavigationPoint() {
    this->SphereComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere mesh component"));
    this->ArrowComponent = NULL;
    this->OnStaticMesh = false;
    this->IsOccupied = false;
}

