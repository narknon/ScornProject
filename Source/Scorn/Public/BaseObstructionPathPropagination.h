#pragma once
#include "CoreMinimal.h"
#include "BaseObstruction.h"
#include "PathAttenuationRatio.h"
#include "AudioPointProperties.h"
#include "UObject/NoExportTypes.h"
#include "BaseObstructionPathPropagination.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCORN_API UBaseObstructionPathPropagination : public UBaseObstruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathAttenuationRatio PathAttenuationRatioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioPointProperties PropaginationPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugPathPropagination;
    
public:
    UBaseObstructionPathPropagination();
    UFUNCTION(BlueprintCallable)
    void SetPointLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetPointAttenuation(const float& inAttenuation);
    
    UFUNCTION(BlueprintCallable)
    void SetPointAngle(const float& inAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugPropaginationPoint();
    
    UFUNCTION(BlueprintCallable)
    float ModifyAttenuationToPathDistanceToListenerRatio(const float& PathDistance);
    
};

