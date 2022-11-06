#include "AIGroupController.h"

class AActor;

bool AAIGroupController::IsGroupAggressive() const {
    return false;
}

AActor* AAIGroupController::GetGroupEnemy() const {
    return NULL;
}

AAIGroupController::AAIGroupController() {
}

