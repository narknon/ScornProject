#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Waypoint.h"
#include "ENPCLocationType.h"
#include "ELocationUseType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ENPCType.h"
#include "ELocationPivot.h"
#include "NPC_LocationObject.generated.h"

class UPivotComponent;
class AStaticMeshActor;

UCLASS(Blueprintable)
class SCORN_API ANPC_LocationObject : public AActor, public IWaypoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeUsedForEntering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCLocationType LocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AStaticMeshActor> AttachToMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDetectEnemy;
    
public:
    ANPC_LocationObject();
    UFUNCTION(BlueprintCallable)
    void SetInUse(bool bUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsUsable(const ELocationUseType UseType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPivotRotation(UPivotComponent* Pivot) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPivotLocationAndRotation(UPivotComponent* Pivot, FVector& PivotLocation, FRotator& PivotRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPivotLocation(UPivotComponent* Pivot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPivotComponent* GetPivot(ELocationPivot PivotType, ELocationUseType UseType, ENPCType NPCType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetOffsetedLocationAndRotation(UPivotComponent* Pivot, FVector& PivotLocation, FRotator& PivotRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPivotComponent* GetNearestPivotToLocation(FVector Location, ELocationUseType UseType, ENPCType NPCType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanUseLocationType(ELocationUseType UseType, ENPCType NPCType) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

