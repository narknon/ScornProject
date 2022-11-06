#include "ObjectHelperFunctions.h"
#include "Templates/SubclassOf.h"

class UObject;
class UNavigationQueryFilter;
class AController;

UObject* UObjectHelperFunctions::DuplicateBlueprintObject(UObject* SourceObject, UObject* Outer) {
    return NULL;
}

void UObjectHelperFunctions::DrawDebugTransform(UObject* WorldContextObject, FTransform InTransform, float Radius, int32 Segments, float ArrowLength, float Duration, FLinearColor InColor) {
}

bool UObjectHelperFunctions::BlueprintNavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier) {
    return false;
}

UObjectHelperFunctions::UObjectHelperFunctions() {
}

