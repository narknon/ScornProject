#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseGameMode.h"
#include "AbstractScornGameMode.generated.h"

class ABaseAudioManager;
class ASkylightSource;
class ASaveGameController;
class AActor;
class AExponentialHeightFogSource;
class UAbstractItemFactory;
class ADirectionalLightSource;
class AGlobalStreamingManager;

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class AAbstractScornGameMode : public ABaseGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextureStreamingFinish, bool, IsTextureStremingFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGCFinish);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGCFinish OnGCFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SIECameraDebugClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SIECamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseAudioManager* AudioManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbstractItemFactory> ConcreteItemFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASaveGameController* SaveGameController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseAudioManager> AudioManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASaveGameController> SaveGameControllerClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFogSource* ExponentialHeightFogSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkylightSource* SkylightSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLightSource* DirectionalLightSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureStreamingBlockCallTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureStreamingObserverCycleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureStreamingObserverMaxTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureStreamingFinish OnTextureStreamingFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FogSystemEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FogSystemDebugEnabled;
    
public:
    AAbstractScornGameMode();
    UFUNCTION(BlueprintCallable)
    void SetEnableTextureStreamingObserver(const bool& Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornVFX_Debug_Exponential_Fog_Boxes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornVFX_Debug_Exponential_Fog();
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void ScornSettings_DebugInput() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_MusicManager_Stop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_MusicManager_SetState(const float& State);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReloadSaveSystemPreferences();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshActorSwitching();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSectionLevelsLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASkylightSource* GetSkylightSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSIECamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASaveGameController* GetSaveGameController() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTextureStreamingObserverEnabled();
    
    UFUNCTION(BlueprintCallable)
    AGlobalStreamingManager* GetGlobalStreamingManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AExponentialHeightFogSource* GetExponentialFogSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADirectionalLightSource* GetDirectionalLightSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UAbstractItemFactory> GetConcreteItemFactoryClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseAudioManager* GetAudioManager() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceGarbageCollection();
    
};

