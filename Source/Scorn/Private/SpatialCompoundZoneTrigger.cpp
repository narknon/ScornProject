#include "SpatialCompoundZoneTrigger.h"

class ASpatialCompoundZone;

void ASpatialCompoundZoneTrigger::SetParentZone(ASpatialCompoundZone* inParentZone) {
}

ASpatialCompoundZone* ASpatialCompoundZoneTrigger::GetParentZone() const {
    return NULL;
}

ASpatialCompoundZoneTrigger::ASpatialCompoundZoneTrigger() {
    this->ParentZone = NULL;
}

