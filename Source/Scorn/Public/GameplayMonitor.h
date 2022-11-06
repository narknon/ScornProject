#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeatBox.h"
#include "DrawSettings.h"
#include "UObject/NoExportTypes.h"
#include "EGameplayMonitorMode.h"
#include "UObject/NoExportTypes.h"
#include "LogSource.h"
#include "EDrawMode.h"
#include "EMarkerType.h"
#include "LogComment.h"
#include "GameplayMonitor.generated.h"

class ABaseConsole;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class SCORN_API AGameplayMonitor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABaseConsole>> Consoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDrawNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatBoxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlayerHeatboxColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NpcHeatboxColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TotalPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultHeatBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector, FHeatBox> CharacterHeatBoxMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector, FHeatBox> NPCHeatBoxMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SceneCaptureHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayMonitorMode WorkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LogRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutosaveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLogSource> LogSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrawMode DrawMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySingleDrawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayLogHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDrawIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOverlaps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSettings NPCSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSettings PlayerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextScale;
    
public:
    AGameplayMonitor();
    UFUNCTION(BlueprintCallable)
    void SetMarker(const FString& MarkerName, EMarkerType MarkerType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDrawIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetComment(FText CommentText);
    
    UFUNCTION(BlueprintCallable)
    void SelectLogFile();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLogIndexChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginPlayFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementScale();
    
    UFUNCTION(BlueprintCallable)
    FText GetTimeForEntry(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    float GetEntryTotalTimeRatio(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLogComment> GetComments();
    
private:
    UFUNCTION(BlueprintCallable)
    void GenerateHeatBoxes();
    
public:
    UFUNCTION(BlueprintCallable)
    void EditComment(int32 Index, FText NewText);
    
    UFUNCTION(BlueprintCallable)
    void DeleteComment(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DecrementScale();
    
};

