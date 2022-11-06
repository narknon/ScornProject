#include "ScornBaseMenu.h"

void UScornBaseMenu::LoadHardSave(int32 SaveIndex) {
}

bool UScornBaseMenu::IsHardSaveSaved(int32 SaveIndex) {
    return false;
}

int32 UScornBaseMenu::GetNoOfHardSaves() {
    return 0;
}

FDateTime UScornBaseMenu::GetHardSaveTime(int32 SaveIndex) {
    return FDateTime{};
}

UScornBaseMenu::UScornBaseMenu() : UUserWidget(FObjectInitializer::Get()) {
}

