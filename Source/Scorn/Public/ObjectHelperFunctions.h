#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ObjectHelperFunctions.generated.h"

class UObject;
class UNavigationQueryFilter;
class AController;

UCLASS(Blueprintable)
class SCORN_API UObjectHelperFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UObjectHelperFunctions();
    UFUNCTION(BlueprintCallable)
    static UObject* DuplicateBlueprintObject(UObject* SourceObject, UObject* Outer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugTransform(UObject* WorldContextObject, FTransform InTransform, float Radius, int32 Segments, float ArrowLength, float Duration, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BlueprintNavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier);
    
};

