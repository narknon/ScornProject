#pragma once
#include "CoreMinimal.h"
#include "PortalZonesGridCell.generated.h"

class APortalSystemZone;

USTRUCT(BlueprintType)
struct PORTALSYSTEM_API FPortalZonesGridCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APortalSystemZone*> Zones;
    
    FPortalZonesGridCell();
};

