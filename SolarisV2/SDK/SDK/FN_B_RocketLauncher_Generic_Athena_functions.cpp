#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C
// (Actor)

class UClass* AB_RocketLauncher_Generic_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_RocketLauncher_Generic_Athena_C");

	return Clss;
}


// B_RocketLauncher_Generic_Athena_C B_RocketLauncher_Generic_Athena.Default__B_RocketLauncher_Generic_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_RocketLauncher_Generic_Athena_C* AB_RocketLauncher_Generic_Athena_C::GetDefaultObj()
{
	static class AB_RocketLauncher_Generic_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_RocketLauncher_Generic_Athena_C*>(AB_RocketLauncher_Generic_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Persistent_Fire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Generic_Athena_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Generic_Athena_C", "Muzzle Flash FX");

	Params::AB_RocketLauncher_Generic_Athena_C_Muzzle_Flash_FX_Params Parms{};

	Parms.Persistent_Fire = Persistent_Fire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Persistent_Fire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Generic_Athena_C::ExecuteUbergraph_B_RocketLauncher_Generic_Athena(int32 EntryPoint, bool K2Node_Event_Persistent_Fire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_RocketLauncher_Generic_Athena_C", "ExecuteUbergraph_B_RocketLauncher_Generic_Athena");

	Params::AB_RocketLauncher_Generic_Athena_C_ExecuteUbergraph_B_RocketLauncher_Generic_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Persistent_Fire = K2Node_Event_Persistent_Fire;

	UObject::ProcessEvent(Func, &Parms);

}

}


