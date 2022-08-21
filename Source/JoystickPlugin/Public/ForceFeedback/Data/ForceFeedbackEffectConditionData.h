#pragma once

#include "ForceFeedback/Data/Base/ForceFeedbackEffectDirectionData.h"
#include "ForceFeedback/Data/Base/ForceFeedbackEffectDurationData.h"
#include "ForceFeedback/Data/Base/ForceFeedbackEffectReplayData.h"

#include "ForceFeedback/Types/ForceFeedbackConditionEffectType.h"
#include "ForceFeedbackEffectConditionData.Generated.h"

USTRUCT(BlueprintType)
struct JOYSTICKPLUGIN_API FForceFeedbackEffectConditionData
{
	GENERATED_BODY()

	FForceFeedbackEffectConditionData()
		: EffectType(EForceFeedbackConditionEffectType::SPRING)
		  , LeftCoeff(FVector::ZeroVector)
		  , LeftSat(FVector::ZeroVector)
		  , RightCoeff(FVector::ZeroVector)
		  , RightSat(FVector::ZeroVector)
		  , Deadband(FVector::ZeroVector)
		  , Center(FVector::ZeroVector)
	{
	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Force Feedback|Condition|Data")
	FForceFeedbackEffectDirectionData DirectionData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Force Feedback|Condition|Data")
	FForceFeedbackEffectDurationData DurationData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Force Feedback|Condition|Data")
	FForceFeedbackEffectReplayData ReplayData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Force Feedback|Condition|Data")
	EForceFeedbackConditionEffectType EffectType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,
		meta = (ShortToolTip = "Positive Coefficient", ToolTip =
			"The slope of the line describing how rapidly the force increases as the input moves away from the center point in the positive direction along the specified axis. Range is from -infinity to +infinity."),
		Category = "Force Feedback|Condition|Data")
	FVector LeftCoeff;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,
		meta = (ShortToolTip = "Max Positive Magnitude", ToolTip = "The maximum magnitude of the force feedback as the input moves away from the center point in the positive direction along the specified axis. Range is from 0 to 1.0."),
		Category = "Force Feedback|Condition|Data")
	FVector LeftSat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,
		meta = (ShortToolTip = "Negative Coefficient", ToolTip =
			"The slope of the line describing how rapidly the force increases as the input moves away from the center point in the negative direction along the specified axis. Range is from -infinity to +infinity."),
		Category = "Force Feedback|Condition|Data")
	FVector RightCoeff;

	UPROPERTY(BlueprintReadWrite, EditAnywhere,
		meta = (ShortToolTip = "Max Negative Magnitude", ToolTip = "The maximum magnitude of the force feedback as the input moves away from the center point in the negative direction along the specified axis. Range is from 0 to 1.0."),
		Category = "Force Feedback|Condition|Data")
	FVector RightSat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ShortToolTip = "Dead Zone", ToolTip = "Specifies the value below which the force feedback is not applied. Range is from 0.0 to 1.0 and is applied asymmetrically around the center point."),
		Category = "Force Feedback|Condition|Data")
	FVector Deadband;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ShortToolTip = "Bias", ToolTip = "The offset to the center point in effect calculations. Range is from -1.0 to 1.0."), Category = "Force Feedback|Condition|Data")
	FVector Center;
};
