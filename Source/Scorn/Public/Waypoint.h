#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EWaypointType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Waypoint.generated.h"

class ABaseNPC;

UINTERFACE(Blueprintable)
class SCORN_API UWaypoint : public UInterface {
    GENERATED_BODY()
};

class SCORN_API IWaypoint : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EWaypointType GetWaypointType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetWaypointRotation(ABaseNPC* NPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetWaypointLocation(ABaseNPC* NPC, bool& bIsValid) const;
    
};

