#include "BaseConsole.h"

class UBaseMachineComponent;

void ABaseConsole::StopUsingConsole() {
}

void ABaseConsole::StartExitSequence() {
}

bool ABaseConsole::ShouldSpawnControlsBar_Implementation() const {
    return false;
}

bool ABaseConsole::ShouldForceUnblockSave_Implementation() const {
    return false;
}



bool ABaseConsole::IsInputBlocked_Implementation() const {
    return false;
}








EScornConsoleType ABaseConsole::GetConsoleType() const {
    return EScornConsoleType::None;
}

void ABaseConsole::GetActiveMachineComponent(UBaseMachineComponent*& ActiveComponent, bool& bSuccess) {
}

void ABaseConsole::ExitAnimStart() {
}

void ABaseConsole::ExecuteExitSequence() {
}

bool ABaseConsole::AutomaticallyShowControlsBar_Implementation() const {
    return false;
}

ABaseConsole::ABaseConsole() {
    this->NeededItem = 0;
    this->ConsoleType = EScornConsoleType::Generic;
    this->ConsoleState = EConsoleState::Idle;
}

