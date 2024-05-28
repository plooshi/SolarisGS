#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PhysXVehicles.WheeledVehicleMovementComponent
// (None)

class UClass* UWheeledVehicleMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WheeledVehicleMovementComponent");

	return Clss;
}


// WheeledVehicleMovementComponent PhysXVehicles.Default__WheeledVehicleMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWheeledVehicleMovementComponent* UWheeledVehicleMovementComponent::GetDefaultObj()
{
	static class UWheeledVehicleMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWheeledVehicleMovementComponent*>(UWheeledVehicleMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseAuto                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetUseAutoGears");

	Params::UWheeledVehicleMovementComponent_SetUseAutoGears_Params Parms{};

	Parms.bUseAuto = bUseAuto;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Throttle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetThrottleInput");

	Params::UWheeledVehicleMovementComponent_SetThrottleInput_Params Parms{};

	Parms.Throttle = Throttle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GearNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetTargetGear(int32 GearNum, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetTargetGear");

	Params::UWheeledVehicleMovementComponent_SetTargetGear_Params Parms{};

	Parms.GearNum = GearNum;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Steering                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetSteeringInput");

	Params::UWheeledVehicleMovementComponent_SetSteeringInput_Params Parms{};

	Parms.Steering = Steering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewHandbrake                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetHandbrakeInput");

	Params::UWheeledVehicleMovementComponent_SetHandbrakeInput_Params Parms{};

	Parms.bNewHandbrake = bNewHandbrake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask           GroupMask                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToIgnoreMask");

	Params::UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params Parms{};

	Parms.GroupMask = GroupMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupFlags                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int32 GroupFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToIgnore");

	Params::UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params Parms{};

	Parms.GroupFlags = GroupFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask           GroupMask                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToAvoidMask");

	Params::UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params Parms{};

	Parms.GroupMask = GroupMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupFlags                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int32 GroupFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToAvoid");

	Params::UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params Parms{};

	Parms.GroupFlags = GroupFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGearUp");

	Params::UWheeledVehicleMovementComponent_SetGearUp_Params Parms{};

	Parms.bNewGearUp = bNewGearUp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGearDown");

	Params::UWheeledVehicleMovementComponent_SetGearDown_Params Parms{};

	Parms.bNewGearDown = bNewGearDown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Brake                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetBrakeInput");

	Params::UWheeledVehicleMovementComponent_SetBrakeInput_Params Parms{};

	Parms.Brake = Brake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask           GroupMask                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceGroupMask");

	Params::UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params Parms{};

	Parms.GroupMask = GroupMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupFlags                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int32 GroupFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceGroup");

	Params::UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params Parms{};

	Parms.GroupFlags = GroupFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceEnabled");

	Params::UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                              InSteeringInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThrottleInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InBrakeInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InHandbrakeInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentGear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "ServerUpdateState");

	Params::UWheeledVehicleMovementComponent_ServerUpdateState_Params Parms{};

	Parms.InSteeringInput = InSteeringInput;
	Parms.InThrottleInput = InThrottleInput;
	Parms.InBrakeInput = InBrakeInput;
	Parms.InHandbrakeInput = InHandbrakeInput;
	Parms.CurrentGear = CurrentGear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetUseAutoGears");

	Params::UWheeledVehicleMovementComponent_GetUseAutoGears_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWheeledVehicleMovementComponent::GetTargetGear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetTargetGear");

	Params::UWheeledVehicleMovementComponent_GetTargetGear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetForwardSpeed");

	Params::UWheeledVehicleMovementComponent_GetForwardSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetEngineRotationSpeed");

	Params::UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetEngineMaxRotationSpeed");

	Params::UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetCurrentGear");

	Params::UWheeledVehicleMovementComponent_GetCurrentGear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// (None)

class UClass* USimpleWheeledVehicleMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleWheeledVehicleMovementComponent");

	return Clss;
}


// SimpleWheeledVehicleMovementComponent PhysXVehicles.Default__SimpleWheeledVehicleMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USimpleWheeledVehicleMovementComponent* USimpleWheeledVehicleMovementComponent::GetDefaultObj()
{
	static class USimpleWheeledVehicleMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleWheeledVehicleMovementComponent*>(USimpleWheeledVehicleMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SteerAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleWheeledVehicleMovementComponent", "SetSteerAngle");

	Params::USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params Parms{};

	Parms.SteerAngle = SteerAngle;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DriveTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleWheeledVehicleMovementComponent", "SetDriveTorque");

	Params::USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params Parms{};

	Parms.DriveTorque = DriveTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              BrakeTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleWheeledVehicleMovementComponent", "SetBrakeTorque");

	Params::USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params Parms{};

	Parms.BrakeTorque = BrakeTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PhysXVehicles.TireConfig
// (None)

class UClass* UTireConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TireConfig");

	return Clss;
}


// TireConfig PhysXVehicles.Default__TireConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UTireConfig* UTireConfig::GetDefaultObj()
{
	static class UTireConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UTireConfig*>(UTireConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class PhysXVehicles.VehicleAnimInstance
// (None)

class UClass* UVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleAnimInstance");

	return Clss;
}


// VehicleAnimInstance PhysXVehicles.Default__VehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleAnimInstance* UVehicleAnimInstance::GetDefaultObj()
{
	static class UVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleAnimInstance*>(UVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehicle*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAnimInstance", "GetVehicle");

	Params::UVehicleAnimInstance_GetVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PhysXVehicles.VehicleWheel
// (None)

class UClass* UVehicleWheel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleWheel");

	return Clss;
}


// VehicleWheel PhysXVehicles.Default__VehicleWheel
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleWheel* UVehicleWheel::GetDefaultObj()
{
	static class UVehicleWheel* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleWheel*>(UVehicleWheel::StaticClass()->DefaultObject);

	return Default;
}


// Function PhysXVehicles.VehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleWheel::IsInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleWheel", "IsInAir");

	Params::UVehicleWheel_IsInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleWheel::GetSuspensionOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleWheel", "GetSuspensionOffset");

	Params::UVehicleWheel_GetSuspensionOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleWheel::GetSteerAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleWheel", "GetSteerAngle");

	Params::UVehicleWheel_GetSteerAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleWheel::GetRotationAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleWheel", "GetRotationAngle");

	Params::UVehicleWheel_GetRotationAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PhysXVehicles.WheeledVehicle
// (Actor, Pawn)

class UClass* AWheeledVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WheeledVehicle");

	return Clss;
}


// WheeledVehicle PhysXVehicles.Default__WheeledVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class AWheeledVehicle* AWheeledVehicle::GetDefaultObj()
{
	static class AWheeledVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<AWheeledVehicle*>(AWheeledVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// (None)

class UClass* UWheeledVehicleMovementComponent4W::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WheeledVehicleMovementComponent4W");

	return Clss;
}


// WheeledVehicleMovementComponent4W PhysXVehicles.Default__WheeledVehicleMovementComponent4W
// (Public, ClassDefaultObject, ArchetypeObject)

class UWheeledVehicleMovementComponent4W* UWheeledVehicleMovementComponent4W::GetDefaultObj()
{
	static class UWheeledVehicleMovementComponent4W* Default = nullptr;

	if (!Default)
		Default = static_cast<UWheeledVehicleMovementComponent4W*>(UWheeledVehicleMovementComponent4W::StaticClass()->DefaultObject);

	return Default;
}

}


