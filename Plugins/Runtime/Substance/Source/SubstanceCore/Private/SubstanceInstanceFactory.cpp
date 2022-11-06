#include "SubstanceInstanceFactory.h"

class USubstanceGraphInstance;

TArray<USubstanceGraphInstance*> USubstanceInstanceFactory::GetGraphInstances() {
    return TArray<USubstanceGraphInstance*>();
}

TArray<FSubstanceGraphDesc> USubstanceInstanceFactory::GetGraphDescs() {
    return TArray<FSubstanceGraphDesc>();
}

USubstanceGraphInstance* USubstanceInstanceFactory::CreateGraphInstance(FSubstanceGraphDesc GraphDesc, const FString& PackageName) {
    return NULL;
}

USubstanceInstanceFactory::USubstanceInstanceFactory() {
    this->GenerationMode = SGM_PlatformDefault;
}

