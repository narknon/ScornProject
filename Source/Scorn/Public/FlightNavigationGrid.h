#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "NavCell.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FlightNavigationGrid.generated.h"

class UBoxComponent;
class USceneComponent;
class UPrimitiveComponent;
class AFlightPathfindingSolver;

UCLASS(Blueprintable)
class SCORN_API AFlightNavigationGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NavVolume;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* IteratorCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelsToWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavCell> Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavVolumeExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ActorsToIgnoreForCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVolumeUpdatesDynamicCollision;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FNavCell> CellsOcupiedByDynamic;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FNavCell> CellsOcupiedByStatic;
    
    AFlightNavigationGrid();
    UFUNCTION(BlueprintCallable)
    void UnRegisterVolumeToPathfindingSolver();
    
    UFUNCTION(BlueprintCallable)
    void RegisterVolumeToPathfindingSolver();
    
    UFUNCTION(BlueprintCallable)
    void OnNavVolumeBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGridGenerationStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGridGenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCellSpawned(const FNavCell NavCell);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationWithinVolume(const FVector Location) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationOcupiedByDynamic(FTransform InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGridFullyGenerated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComponentADynamicBlocker(UPrimitiveComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    bool IsCellOcupiedByDynamic(const FNavCell cell);
    
    UFUNCTION(BlueprintCallable)
    void GridGenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalGridSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFlightPathfindingSolver* GetOrSpawnNavigationSolver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCellForWorldLocation(const FVector& LocationToProject, FVector& ProjectedLocation, FNavCell& NavigationCell) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsToIgnoreForCollision();
    
    UFUNCTION(BlueprintCallable)
    void GenerateGrid(const bool bOnMainThread);
    
};

