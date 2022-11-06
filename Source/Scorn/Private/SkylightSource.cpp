#include "SkylightSource.h"
#include "SavableSkylightComponent.h"

class ASkyLightTemplate;

FString ASkylightSource::GetCurrentState() {
    return TEXT("");
}

void ASkylightSource::ApplyProperties(const FSkyLightKeyProps& inProperties, bool bSetLocation) {
}

void ASkylightSource::AnimateTemplates(TArray<ASkyLightTemplate*> SkyLightTemplate) {
}

ASkylightSource::ASkylightSource() {
    this->SkyLightComponent = CreateDefaultSubobject<USavableSkylightComponent>(TEXT("SavableSkylightComponent"));
}

