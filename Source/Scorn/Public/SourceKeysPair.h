#pragma once
#include "CoreMinimal.h"
#include "SourceKeysPair.generated.h"

class ABaseAudioSource;
class ASoundPropertiesAnimationKey;

USTRUCT(BlueprintType)
struct FSourceKeysPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseAudioSource* AudioSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASoundPropertiesAnimationKey*> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CustomParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
    SCORN_API FSourceKeysPair();
};

