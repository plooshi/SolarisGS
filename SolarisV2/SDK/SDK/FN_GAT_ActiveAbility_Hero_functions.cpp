#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
// (None)

class UClass* UGAT_ActiveAbility_Hero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_ActiveAbility_Hero_C");

	return Clss;
}


// GAT_ActiveAbility_Hero_C GAT_ActiveAbility_Hero.Default__GAT_ActiveAbility_Hero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_ActiveAbility_Hero_C* UGAT_ActiveAbility_Hero_C::GetDefaultObj()
{
	static class UGAT_ActiveAbility_Hero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_ActiveAbility_Hero_C*>(UGAT_ActiveAbility_Hero_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.CommitAbilityWithEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passed                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_ActiveAbility_Hero_C::CommitAbilityWithEvent(bool* Passed, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "CommitAbilityWithEvent");

	Params::UGAT_ActiveAbility_Hero_C_CommitAbilityWithEvent_Params Parms{};

	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passed != nullptr)
		*Passed = Parms.Passed;

}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_ActiveAbility_Hero_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.ExecuteUbergraph_GAT_ActiveAbility_Hero
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_Hero_C::ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_ActiveAbility_Hero_C", "ExecuteUbergraph_GAT_ActiveAbility_Hero");

	Params::UGAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


