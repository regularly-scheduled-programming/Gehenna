#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GamepadDetection.generated.h"

/**
 *
 */
UCLASS()
class GEHENNA_API UGamepadDetection : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/* Check if gamepad is connected at Runtime. */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GamepadConnected"), Category = "System Information")
		static bool IsGamePadConnected();


};