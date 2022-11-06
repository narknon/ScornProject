#include "AbstractScornPlayerController.h"

void AAbstractScornPlayerController::UpdatePlayerSpecificAxisMappingNonGamepad(const FInputAxisKeyMapping NewAxisMapping, bool bForceRebuildingKeyMaps) {
}

void AAbstractScornPlayerController::UpdatePlayerSpecificActionMappingNonGamepad(const FInputActionKeyMapping NewActionMapping, bool bForceRebuildingKeyMaps) {
}

bool AAbstractScornPlayerController::UpdateAxisInvertedStatus_HidController(bool IsInverted, const FString& AxisName) {
    return false;
}

void AAbstractScornPlayerController::SetGamepadType(TEnumAsByte<EScornGamepadType> Type) {
}

void AAbstractScornPlayerController::SetDeviceInputTypeAndBroadcastChange(TEnumAsByte<EScornDeviceInputType> NewInputType) {
}

void AAbstractScornPlayerController::ResetSingleAxisMappingNonGamepad(const FInputAxisKeyMapping& AxisKeyMapping, FInputAxisKeyMapping& DefaultAxisKeyMapping) {
}

void AAbstractScornPlayerController::ResetSingleActionMappingNonGamepad(const FInputActionKeyMapping& ActionKeyMapping, FInputActionKeyMapping& DefaultActionKeyMapping) {
}

void AAbstractScornPlayerController::ResetPlayerSpecificNonGamepadMappings() {
}

bool AAbstractScornPlayerController::ResetNonGamepadMappings() {
    return false;
}

bool AAbstractScornPlayerController::ResetAllDevicesMappings() {
    return false;
}

bool AAbstractScornPlayerController::RemovePlayerSpecificAxisMapping(const FInputAxisKeyMapping& AxisKeyMapping, bool bForceRebuildingKeyMaps) {
    return false;
}

bool AAbstractScornPlayerController::RemovePlayerSpecificActionMapping(const FInputActionKeyMapping& ActionKeyMapping, bool bForceRebuildingKeyMaps) {
    return false;
}



void AAbstractScornPlayerController::LoadAndSetDefaultAxisMappingsByDeviceType(TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType) {
}

void AAbstractScornPlayerController::LoadAndSetDefaultActionMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType) {
}

bool AAbstractScornPlayerController::IsHidControllerKey(const FKey& Key) const {
    return false;
}

bool AAbstractScornPlayerController::IsGamepadInputDevice(const TEnumAsByte<EScornDeviceInputType>& ScornDeviceInputType) {
    return false;
}

TEnumAsByte<EScornGamepadType> AAbstractScornPlayerController::GetGamepadType() const {
    return XBox;
}

TEnumAsByte<EScornDeviceInputType> AAbstractScornPlayerController::GetDeviceInputType() const {
    return ScornDeviceInput_Mouse;
}

FInputAxisKeyMapping AAbstractScornPlayerController::GetDefaultAxisKeyMappingFromAxisNameNonGamepad(const FInputAxisKeyMapping& AxisKeyMapping) {
    return FInputAxisKeyMapping{};
}

FInputActionKeyMapping AAbstractScornPlayerController::GetDefaultActionKeyMappingFromActionNameNonGamepad(const FInputActionKeyMapping& ActionKeyMapping) {
    return FInputActionKeyMapping{};
}

bool AAbstractScornPlayerController::GetCurrentAxisKeyMappingsFromAxisNameNonGamepad(const FName& AxisMappingName, TArray<FInputAxisKeyMapping>& CurrentAxisKeyMappings) {
    return false;
}

bool AAbstractScornPlayerController::GetCurrentActionKeyMappingFromActionNameNonGamepad(const FName& ActionMappingName, TArray<FInputActionKeyMapping>& CurrentActionKeyMappings) {
    return false;
}

bool AAbstractScornPlayerController::GetConnectedGamepadType(int32& VendorID) {
    return false;
}

TArray<FInputAxisKeyMapping> AAbstractScornPlayerController::GetAllPlayerNonGamepadAxisMappings() const {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> AAbstractScornPlayerController::GetAllPlayerNonGamepadActionMappings() const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FInputAxisKeyMapping> AAbstractScornPlayerController::GetAllDefaultAxisMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType>& ScornDeviceInputType) const {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> AAbstractScornPlayerController::GetAllDefaultActionMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType>& ScornDeviceInputType) const {
    return TArray<FInputActionKeyMapping>();
}

bool AAbstractScornPlayerController::ClearAxisMappingsByDeviceType(const TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType) {
    return false;
}

bool AAbstractScornPlayerController::ClearActionMappingsByDeviceType(TEnumAsByte<EScornDeviceInputType> ScornDeviceInputType) {
    return false;
}

void AAbstractScornPlayerController::CheckForNewDevices() {
}

void AAbstractScornPlayerController::AssignPlayerAxisMappingsNonGamepad(const TArray<FInputAxisKeyMapping> PersistentAxisMappings) {
}

void AAbstractScornPlayerController::AssignPlayerActionMappingsNonGamepad(const TArray<FInputActionKeyMapping> PersistentActionMappings) {
}

void AAbstractScornPlayerController::AssignPlayerActionMappingsGamepad(EScornControllerLayouts layout) {
}

void AAbstractScornPlayerController::AddPlayerSpecificAxisMapping(const FInputAxisKeyMapping& AxisKeyMapping, bool bForceRebuildingKeyMaps) {
}

void AAbstractScornPlayerController::AddPlayerSpecificActionMapping(const FInputActionKeyMapping& ActionKeyMapping, bool bForceRebuildingKeyMaps) {
}

AAbstractScornPlayerController::AAbstractScornPlayerController() {
}

