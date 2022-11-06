#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayLogDraw.generated.h"

UCLASS(Blueprintable)
class SCORN_API AGameplayLogDraw : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    AGameplayLogDraw();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowText(bool bShowText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowArrow(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextScale(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FString& UpperText, const FString& LowerText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealth(float Health, float MaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColor(const FLinearColor& Color);
    
};

