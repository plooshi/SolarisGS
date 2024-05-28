#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CowboyPistol_AnimBP.CowboyPistol_AnimBP_C
// (None)

class UClass* UCowboyPistol_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowboyPistol_AnimBP_C");

	return Clss;
}


// CowboyPistol_AnimBP_C CowboyPistol_AnimBP.Default__CowboyPistol_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCowboyPistol_AnimBP_C* UCowboyPistol_AnimBP_C::GetDefaultObj()
{
	static class UCowboyPistol_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowboyPistol_AnimBP_C*>(UCowboyPistol_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CowboyPistol_AnimBP.CowboyPistol_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCowboyPistol_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CowboyPistol_AnimBP_C", "AnimGraph");

	Params::UCowboyPistol_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function CowboyPistol_AnimBP.CowboyPistol_AnimBP_C.AnimNotify_ChamberRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCowboyPistol_AnimBP_C::AnimNotify_ChamberRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CowboyPistol_AnimBP_C", "AnimNotify_ChamberRotation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CowboyPistol_AnimBP.CowboyPistol_AnimBP_C.ExecuteUbergraph_CowboyPistol_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCowboyPistol_AnimBP_C::ExecuteUbergraph_CowboyPistol_AnimBP(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CowboyPistol_AnimBP_C", "ExecuteUbergraph_CowboyPistol_AnimBP");

	Params::UCowboyPistol_AnimBP_C_ExecuteUbergraph_CowboyPistol_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


