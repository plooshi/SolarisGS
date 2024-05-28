#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
// (Actor)

class UClass* ATrap_Athena_WallSpikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_Athena_WallSpikes_C");

	return Clss;
}


// Trap_Athena_WallSpikes_C Trap_Athena_WallSpikes.Default__Trap_Athena_WallSpikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_Athena_WallSpikes_C* ATrap_Athena_WallSpikes_C::GetDefaultObj()
{
	static class ATrap_Athena_WallSpikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_Athena_WallSpikes_C*>(ATrap_Athena_WallSpikes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.SetSpikePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewSpikePosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_WallSpikes_C::SetSpikePosition(float NewSpikePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Athena_WallSpikes_C", "SetSpikePosition");

	Params::ATrap_Athena_WallSpikes_C_SetSpikePosition_Params Parms{};

	Parms.NewSpikePosition = NewSpikePosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.ExecuteUbergraph_Trap_Athena_WallSpikes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewSpikePosition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_WallSpikes_C::ExecuteUbergraph_Trap_Athena_WallSpikes(int32 EntryPoint, float K2Node_Event_NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Athena_WallSpikes_C", "ExecuteUbergraph_Trap_Athena_WallSpikes");

	Params::ATrap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewSpikePosition = K2Node_Event_NewSpikePosition;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


