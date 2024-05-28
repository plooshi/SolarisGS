#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tracer_Shotgun.Tracer_Shotgun_C
// (Actor)

class UClass* ATracer_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tracer_Shotgun_C");

	return Clss;
}


// Tracer_Shotgun_C Tracer_Shotgun.Default__Tracer_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATracer_Shotgun_C* ATracer_Shotgun_C::GetDefaultObj()
{
	static class ATracer_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATracer_Shotgun_C*>(ATracer_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tracer_Shotgun.Tracer_Shotgun_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATracer_Shotgun_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tracer_Shotgun_C", "UserConstructionScript");

	Params::ATracer_Shotgun_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tracer_Shotgun.Tracer_Shotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATracer_Shotgun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tracer_Shotgun_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tracer_Shotgun.Tracer_Shotgun_C.ExecuteUbergraph_Tracer_Shotgun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracer_Shotgun_C::ExecuteUbergraph_Tracer_Shotgun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tracer_Shotgun_C", "ExecuteUbergraph_Tracer_Shotgun");

	Params::ATracer_Shotgun_C_ExecuteUbergraph_Tracer_Shotgun_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


