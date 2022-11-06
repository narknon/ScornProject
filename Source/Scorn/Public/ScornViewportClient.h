#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "InputCoreTypes.h"
#include "EScornViewportFocusState.h"
#include "ScornViewportClient.generated.h"

class UScornViewportClient;

UCLASS(Blueprintable, NonTransient)
class SCORN_API UScornViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScreenFadeStart, UScornViewportClient*, ScornViewportClient, bool, IsFading);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScreenFadedToBlackEnd, UScornViewportClient*, ScornViewportClient, bool, IsFading);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScreenFadedFromBlackEnd, UScornViewportClient*, ScornViewportClient, bool, IsFading);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMouseMove, int32, X, int32, Y);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyPress, FKey, Key);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusRecieved, UScornViewportClient*, ScornViewportClient);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusLost, UScornViewportClient*, ScornViewportClient);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFocus_ConstrainCursor);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBussesPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyPress OnKeyPress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseMove OnMouseMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusLost OnFocusLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusRecieved OnFocusRecieved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocus_ConstrainCursor OnFocusConstrainCursor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenFadeStart OnScreenFadeStartHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenFadedToBlackEnd OnScreenFadedToBlackEndHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenFadedFromBlackEnd OnScreenFadedFromBlackEndHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBussesMuted;
    
public:
    UScornViewportClient();
    UFUNCTION(BlueprintCallable)
    void SetScornViewportState(const TEnumAsByte<EScornViewportFocusState> State);
    
    UFUNCTION(BlueprintCallable)
    void OnWindowFocusChanged(bool bIsFocused);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EScornViewportFocusState> GetScornViewportState() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeToBlack(const float Duration);
    
    UFUNCTION(BlueprintCallable)
    void FadeFromBlack(const float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ConstrainCursor();
    
};

