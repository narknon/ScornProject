#include "HitReactionComponent.h"

UHitReactionComponent::UHitReactionComponent() {
    this->bReachedDamageThreshold = false;
    this->ReactionDamageThreshold = 7.00f;
    this->ReactionWindowLength = 5.00f;
    this->bResetTimerOnHit = false;
}

