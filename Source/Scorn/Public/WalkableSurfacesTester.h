#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "HitType.h"
#include "StructPoint.h"
#include "WalkableSurfacesTester.generated.h"

UCLASS(Blueprintable)
class SCORN_API AWalkableSurfacesTester : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopSearching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowClearPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnabelDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnabelDrawDebugHitResult;
    
    AWalkableSurfacesTester();
    UFUNCTION(BlueprintCallable)
    void StopSearch();
    
    UFUNCTION(BlueprintCallable)
    void StartSearch(FVector Start);
    
    UFUNCTION(BlueprintCallable)
    void SaveSearchResult();
    
    UFUNCTION(BlueprintCallable)
    void LoadSearchResult();
    
    UFUNCTION(BlueprintCallable)
    void HitWhileSearching(FVector HitLocation, FVector ImapctPoint, FVector ImpactNormal, int32 CallID, HitType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStructPoint> GetUncheckedPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStructPoint> GetEdgesFromUncheckedPoint(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStructPoint> GetEdgesFromCollisionPoint(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStructPoint> GetEdgesFromCheckedPoint(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStructPoint GetCurentOriginPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStructPoint> GetCollisionPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStructPoint> GetCheckedPoints() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishedSearching(FVector EndLocation);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugLinesPointsForHitResultArray();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugForAllFStructPoints();
    
    UFUNCTION(BlueprintCallable)
    void ContinueSearch();
    
    UFUNCTION(BlueprintCallable)
    void CleanBorderPoints();
    
};

