#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "ScornRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class SCORN_API AScornRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AScornRecastNavMesh();
};

