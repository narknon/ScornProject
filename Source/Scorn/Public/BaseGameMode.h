#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BaseGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class SCORN_API ABaseGameMode : public AGameMode {
    GENERATED_BODY()
public:
    ABaseGameMode();
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void ScornSettings_ResetAllKeyMappings() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void ScornSettings_DebugDisplay() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void ScornSettings_DebugControllerInput() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Zone_Status();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_VCA_Status();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_NPC_Debug_All();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_MusicManager_Status();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Menu_Settings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_EventInstance_List_Playing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Channel_Display_Metering();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Bus_Status();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Banks_UnloadBankSampleData(const FString& inBankName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Banks_UnloadBank(const FString& inBankName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Banks_LoadOnlyBank(const FString& inBankName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Banks_LoadBankAndSampleData(const FString& inBankName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScornAudio_Bank_Status();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenLevel(const FName& inMapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLoadingScreen(const bool& Debug);
    
};

