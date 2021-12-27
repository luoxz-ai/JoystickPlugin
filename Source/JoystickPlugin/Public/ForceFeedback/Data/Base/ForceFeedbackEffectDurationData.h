#pragma once

#include "ForceFeedbackEffectDurationData.Generated.h"

USTRUCT(BlueprintType)
struct JOYSTICKPLUGIN_API FForceFeedbackEffectDurationData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ShortToolTip = "Duration", ToolTip = "The duration of the effect."), Category = "Force Feedback|Duration|Data")
		float Duration = 1.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ShortToolTip = "Infinite Duration", ToolTip = "Whether the effect should run infinitely."), Category = "Force Feedback|Duration|Data")
		bool InfiniteDuration = false;

};

