#include "PortalSystemZone.h"

void APortalSystemZone::OnZoneVisibilityChange_Implementation(bool newVisibility) {
}

bool APortalSystemZone::IsZoneVisible() {
    return false;
}

bool APortalSystemZone::ContainPoint(const FVector& Point) const {
    return false;
}

APortalSystemZone::APortalSystemZone() {
}

