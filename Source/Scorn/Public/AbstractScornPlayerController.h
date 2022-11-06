#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "EScornDeviceInputType.h"
#include "GameFramework/PlayerController.h"
#include "EAxisDirection.h"
#include "GameFramework/PlayerInput.h"
#include "EScornGamepadType.h"
#include "InputCoreTypes.h"
#include "EScornControllerLayouts.h"
#include "AbstractScornPlayerController.generated.h"

UCLASS(Blueprintable)
class SCORN_API AAbstractScornPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeDeviceInputType, TEnumAsByte<EScornDeviceInputType>, CurrentDeviceInputType);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeDeviceInputType OnChangeDeviceInputType;
    
    AAbstractScornPlayerController();
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerSpecificAxisMappingNonGamepad(const FInputAxisKeyMapping NewAxisMapping, bool bForceRebuildingKeyMaps);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerSpecificActionMappingNonGamepad(const FInputActionKeyMapping NewActionMapping, bool bForceRebuildingKeyMaps);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAxisInvertedStatus_HidController(bool IsInverted, const FString& AxisName);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadType(TEnumAsByte<EScornGamepadType> Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDeviceInputTypeAndBroadcastChange(TEnumAsByte<EScornDeviceInputType> NewInputType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetSingleAxisMappingNonGamepad(const FInputAxisKeyMapping& AxisKeyMapping, FInputAxisKeyMapping& DefaultAxisKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    void ResetSingleActionMappingNonGamepad(const FInputActionKeyMapping& ActionKeyMapping, FInputActionKeyMapping& DefaultActionKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerSpecificNonGamepadMappings();
    
    UFUNCTION(BlueprintCallable)
    bool ResetNonGamepadMappings();
    
    UFUNCTION(BlueprintCallable)
    bool ResetAllDevicesMappings();
    
    UFUNCTION(BlueprintCallable)
    bool RemovePlayerSpecificAxisMapping(const FInputAxisKeyMapping& AxisKeyMapping, bool bForceRebuildingKeyMaps);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePlayerSpecificActionMapping(const FInputActionKeyMapping& ActionKeyMapping, bool bForceRebuildingKeyMaps);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitInputSystem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAxisInputChange(EAxisDirection AxisDirection, float Value);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndSetDefaultAxisMappingsByDeviceType(TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndSetDefaultActionMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHidControllerKey(const FKey& Key) const;
    
    UFUNCTION(BlueprintPure)
    static bool IsGamepadInputDevice(const TEnumAsByte<EScornDeviceInputType>& ScornDeviceInputType);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EScornGamepadType> GetGamepadType() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EScornDeviceInputType> GetDeviceInputType() const;
    
    UFUNCTION(BlueprintCallable)
    FInputAxisKeyMapping GetDefaultAxisKeyMappingFromAxisNameNonGamepad(const FInputAxisKeyMapping& AxisKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    FInputActionKeyMapping GetDefaultActionKeyMappingFromActionNameNonGamepad(const FInputActionKeyMapping& ActionKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentAxisKeyMappingsFromAxisNameNonGamepad(const FName& AxisMappingName, TArray<FInputAxisKeyMapping>& CurrentAxisKeyMappings);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentActionKeyMappingFromActionNameNonGamepad(const FName& ActionMappingName, TArray<FInputActionKeyMapping>& CurrentActionKeyMappings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConnectedGamepadType(int32& VendorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetAllPlayerNonGamepadAxisMappings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetAllPlayerNonGamepadActionMappings() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputAxisKeyMapping> GetAllDefaultAxisMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType>& ScornDeviceInputType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetAllDefaultActionMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType>& ScornDeviceInputType) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearAxisMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType);
    
    UFUNCTION(BlueprintCallable)
    bool ClearActionMappingsByDeviceType(TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType);
    
    UFUNCTION(BlueprintCallable)
    void CheckForNewDevices();
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerAxisMappingsNonGamepad(const TArray<FInputAxisKeyMapping> PersistentAxisMappings);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerActionMappingsNonGamepad(const TArray<FInputActionKeyMapping> PersistentActionMappings);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerActionMappingsGamepad(EScornControllerLayouts layout);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerSpecificAxisMapping(const FInputAxisKeyMapping& AxisKeyMapping, bool bForceRebuildingKeyMaps);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerSpecificActionMapping(const FInputActionKeyMapping& ActionKeyMapping, bool bForceRebuildingKeyMaps);
    
};

