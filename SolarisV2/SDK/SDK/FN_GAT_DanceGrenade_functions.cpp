#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_DanceGrenade.GAT_DanceGrenade_C
// (None)

class UClass* UGAT_DanceGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_DanceGrenade_C");

	return Clss;
}


// GAT_DanceGrenade_C GAT_DanceGrenade.Default__GAT_DanceGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_DanceGrenade_C* UGAT_DanceGrenade_C::GetDefaultObj()
{
	static class UGAT_DanceGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_DanceGrenade_C*>(UGAT_DanceGrenade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_DanceGrenade.GAT_DanceGrenade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_DanceGrenade_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_DanceGrenade_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAT_DanceGrenade.GAT_DanceGrenade_C.ExecuteUbergraph_GAT_DanceGrenade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_DanceGrenade_C::ExecuteUbergraph_GAT_DanceGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_DanceGrenade_C", "ExecuteUbergraph_GAT_DanceGrenade");

	Params::UGAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


