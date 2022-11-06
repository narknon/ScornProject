#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorOnlyActor.generated.h"

UCLASS(Blueprintable)
class SCORN_API AEditorOnlyActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditorOnly;
    
public:
    AEditorOnlyActor();
};

