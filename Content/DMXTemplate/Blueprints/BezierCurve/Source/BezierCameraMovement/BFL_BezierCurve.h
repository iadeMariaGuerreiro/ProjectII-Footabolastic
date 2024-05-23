#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_BezierCurve.generated.h"

// https://en.wikipedia.org/wiki/B%C3%A9zier_curve
UCLASS()
class BEZIERCAMERAMOVEMENT_API UBFL_BezierCurve : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public: // Utility Functions

	/**
	 * SampleTime (Range between 0 - 1)
	 * P0 - Initial Point
	 * P1 - Tangent Point
	 * P2 - Final Point
	 * Returns A Location Sampled On The Bezier Curve
	 * Note: It does not correct values outside of the 0 to 1 range
	 */
	UFUNCTION(BlueprintPure)
	static FVector SampleQuadraticBezierCurve(float SampleTime,
		const FVector& P0,  const FVector& P1,  const FVector& P2);

	/**
	 * SampleTime (Range between 0 - 1)
	 * P0 - Initial Point
	 * P1 - Tangent Point 1
	 * P2 - Tangent Point 2
	 * P3 - Final Point
	 * Returns A Location Sampled On The Bezier Curve
	 * Note: It does not correct values outside of the 0 to 1 range
	 */
	UFUNCTION(BlueprintPure)
	static FVector SampleCubicBezierCurve(float SampleTime, const FVector& P0,
		const FVector& P1,  const FVector& P2,  const FVector& P3);

public: // Debug Visualizer Functions

	UFUNCTION(BlueprintCallable)
	static void DebugDrawQuadraticBezierCurve(int Segments, const FVector& P0,
	                                          const FVector& P1, const FVector& P2, const UObject* WorldContext, FLinearColor LinearColor = FLinearColor::Red, float Duration = 0.0f, float
	                                          Thickness = 3.0f);

	UFUNCTION(BlueprintCallable)
	static void DebugDrawCubicBezierCurve(int Segments, const FVector& P0,
	                                      const FVector& P1, const FVector& P2, const FVector& P3, const UObject* WorldContext, FLinearColor LinearColor = FLinearColor::Red, float
	                                      Duration = 0.0f, float Thickness = 3.0f);
};
