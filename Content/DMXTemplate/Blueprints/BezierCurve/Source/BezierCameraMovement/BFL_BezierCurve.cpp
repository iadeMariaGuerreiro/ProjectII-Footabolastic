#include "BFL_BezierCurve.h"

#include "Kismet/KismetSystemLibrary.h"

FVector UBFL_BezierCurve::SampleQuadraticBezierCurve(float SampleTime,
                                                     const FVector& P0,  const FVector& P1,  const FVector& P2)
{
	return	(FMath::Pow(1-SampleTime, 2) * P0) +
			((1-SampleTime) * 2 * SampleTime * P1) +
			(FMath::Pow(SampleTime, 2) * P2);
}


FVector UBFL_BezierCurve::SampleCubicBezierCurve(float SampleTime,
	const FVector& P0,  const FVector& P1,  const FVector& P2,  const FVector& P3)
{
	/* More Explicit Version To Simplify How It's Viewed
	
	FVector Part0OfCalculation = FMath::Pow((1-SampleTime), 3) * P0;
	FVector Part1OfCalculation = FMath::Pow((1-SampleTime),2) * 3 * SampleTime * P1;
	FVector Part2OfCalculation = (1-SampleTime) * (FMath::Pow(SampleTime, 2)) * 3 * P2;
	FVector Part3OfCalculation = FMath::Pow(SampleTime, 3) * P3;

	return Part0OfCalculation + Part1OfCalculation + Part2OfCalculation + Part3OfCalculation;
	*/

	return	(FMath::Pow((1-SampleTime), 3) * P0) +
			(FMath::Pow((1-SampleTime),2) * 3 * SampleTime * P1) +
			((1-SampleTime) * (FMath::Pow(SampleTime, 2)) * 3 * P2) +
			(FMath::Pow(SampleTime, 3) * P3);
}

void UBFL_BezierCurve::DebugDrawQuadraticBezierCurve(int Segments, const FVector& P0, const FVector& P1,
	const FVector& P2, const UObject* WorldContext, FLinearColor LinearColor, float Duration, float Thickness)
{
	// Don't Even Try Draw Impossible Cases
	if(Segments < 2) return;
	
	const int TotalSegments = Segments-1;
	for(int i = 0; i < TotalSegments; ++i)
	{
		float LineStartTime = (float)i / (float)TotalSegments;
		float LineEndTime	= (float)(i + 1) / (float)TotalSegments;
		FVector LineStart	= SampleQuadraticBezierCurve(LineStartTime, P0, P1, P2);
		FVector LineEnd		= SampleQuadraticBezierCurve(LineEndTime, P0, P1, P2);

		UKismetSystemLibrary::DrawDebugLine(WorldContext, LineStart, LineEnd, LinearColor, Duration, Thickness);
	}
}

void UBFL_BezierCurve::DebugDrawCubicBezierCurve(int Segments, const FVector& P0, const FVector& P1, const FVector& P2,
	const FVector& P3, const UObject* WorldContext, FLinearColor LinearColor, float Duration, float Thickness)
{
	// Don't Even Try Draw Impossible Cases
	if(Segments < 2) return;
	
	const int TotalSegments = Segments-1;
	for(int i = 0; i < TotalSegments; ++i)
	{
		float LineStartTime = (float)i / (float)TotalSegments;
		float LineEndTime	= (float)(i + 1) / (float)TotalSegments;
		FVector LineStart	= SampleCubicBezierCurve(LineStartTime, P0, P1, P2, P3);
		FVector LineEnd		= SampleCubicBezierCurve(LineEndTime, P0, P1, P2, P3);

		UKismetSystemLibrary::DrawDebugLine(WorldContext, LineStart, LineEnd, LinearColor, Duration, Thickness);
	}
}
