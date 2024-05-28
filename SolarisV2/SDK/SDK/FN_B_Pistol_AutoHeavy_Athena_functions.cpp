#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C
// (Actor)

class UClass* AB_Pistol_AutoHeavy_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Pistol_AutoHeavy_Athena_C");

	return Clss;
}


// B_Pistol_AutoHeavy_Athena_C B_Pistol_AutoHeavy_Athena.Default__B_Pistol_AutoHeavy_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Pistol_AutoHeavy_Athena_C* AB_Pistol_AutoHeavy_Athena_C::GetDefaultObj()
{
	static class AB_Pistol_AutoHeavy_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Pistol_AutoHeavy_Athena_C*>(AB_Pistol_AutoHeavy_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pistol_AutoHeavy_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pistol_AutoHeavy_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pistol_AutoHeavy_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pistol_AutoHeavy_Athena_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ExecuteUbergraph_B_Pistol_AutoHeavy_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_AutoHeavy_Athena_C::ExecuteUbergraph_B_Pistol_AutoHeavy_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pistol_AutoHeavy_Athena_C", "ExecuteUbergraph_B_Pistol_AutoHeavy_Athena");

	Params::AB_Pistol_AutoHeavy_Athena_C_ExecuteUbergraph_B_Pistol_AutoHeavy_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


