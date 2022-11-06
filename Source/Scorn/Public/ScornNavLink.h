#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "ScornNavLink.generated.h"

UCLASS(Blueprintable)
class SCORN_API AScornNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AScornNavLink();
    UFUNCTION(BlueprintCallable)
    void OpenLink();
    
    UFUNCTION(BlueprintCallable)
    void CloseLink();
    
};

