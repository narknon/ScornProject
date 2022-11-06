#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SpatializedSoundDebugger.generated.h"

class UTextRenderComponent;
class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class SCORN_API ASpatializedSoundDebugger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* Text_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* Text_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* Text_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* Text_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* Text_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* TextMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterialInst;
    
public:
    ASpatializedSoundDebugger();
    UFUNCTION(BlueprintCallable)
    void SetTextRotation(const FVector& ListenerLocation, const FVector& EmiterLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetText_Top(const FString& InText, const float& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetText_Bottom(const FString& InText, const float& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetText_4(const FString& InText, const float& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetText_3(const FString& InText, const float& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetText_2(const FString& InText, const float& InValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetText(UTextRenderComponent* Component, const FString& InText, const float& InValue);
    
};

