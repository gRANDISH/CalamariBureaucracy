// Copyright Epic Games, Inc. All Rights Reserved.

#include "CalamariBureaucracyPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "CalamariBureaucracyCharacter.h"
#include "Engine/World.h"
#include "../../../../../../../../Program Files/Epic Games/UE_4.26/Engine/Plugins/Experimental/BlastPlugin/Source/ThirdParty/lowlevel/include/NvPreprocessor.h"

ACalamariBureaucracyPlayerController::ACalamariBureaucracyPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ACalamariBureaucracyPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}
	
	BlendedAxisMovement();
}

void ACalamariBureaucracyPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &ACalamariBureaucracyPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ACalamariBureaucracyPlayerController::OnSetDestinationReleased);

	// support touch devices 
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ACalamariBureaucracyPlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ACalamariBureaucracyPlayerController::MoveToTouchLocation);

	InputComponent->BindAction("ResetVR", IE_Pressed, this, &ACalamariBureaucracyPlayerController::OnResetVR);

	// set up axis binding
	FInputAxisBinding ForwardInput = InputComponent->BindAxis("MoveForward", this, &ACalamariBureaucracyPlayerController::dumb);
	ForwardInput.bConsumeInput = false;
	FInputAxisBinding RightInput = InputComponent->BindAxis("MoveRight", this, &ACalamariBureaucracyPlayerController::dumb);
	RightInput.bConsumeInput = false;
}

void ACalamariBureaucracyPlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ACalamariBureaucracyPlayerController::MoveToMouseCursor()
{
	if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
	{
		if (ACalamariBureaucracyCharacter* MyPawn = Cast<ACalamariBureaucracyCharacter>(GetPawn()))
		{
			if (MyPawn->GetCursorToWorld())
			{
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
			}
		}
	}
	else
	{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);

		if (Hit.bBlockingHit)
		{
			// We hit something, move there
			SetNewMoveDestination(Hit.ImpactPoint);
		}
	}
}

void ACalamariBureaucracyPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void ACalamariBureaucracyPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if ((Distance > 120.0f))
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
		}
	}
}

void ACalamariBureaucracyPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void ACalamariBureaucracyPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}

void ACalamariBureaucracyPlayerController::BlendedAxisMovement()
{
	if (abs(InputComponent->GetAxisValue(TEXT("MoveForward"))) > 0.0f || abs(InputComponent->GetAxisValue(TEXT("MoveRight"))) > 0.0f)
	{
		//blend the axis magnitudes and turn into a direction
		FVector Dir;
		Dir = FVector(InputComponent->GetAxisValue(TEXT("MoveForward")), InputComponent->GetAxisValue(TEXT("MoveRight")), 0.0f);

		APawn* const MyPawn = GetPawn();
		MyPawn->AddMovementInput(Dir, 1.0f, false);

	}
}

void ACalamariBureaucracyPlayerController::dumb(float AxisValue)
{
	//this seems dumb, as named; however, the right way to do the binding eludes me
	return;
};