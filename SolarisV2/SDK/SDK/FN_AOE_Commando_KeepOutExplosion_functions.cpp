#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// (Actor)

class UClass* AAOE_Commando_KeepOutExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AOE_Commando_KeepOutExplosion_C");

	return Clss;
}


// AOE_Commando_KeepOutExplosion_C AOE_Commando_KeepOutExplosion.Default__AOE_Commando_KeepOutExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAOE_Commando_KeepOutExplosion_C* AAOE_Commando_KeepOutExplosion_C::GetDefaultObj()
{
	static class AAOE_Commando_KeepOutExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAOE_Commando_KeepOutExplosion_C*>(AAOE_Commando_KeepOutExplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundAttenuationSettings   CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings (None)
// bool                               CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundAttenuationSettings   K2Node_MakeStruct_SoundAttenuationSettings                       (None)

void AAOE_Commando_KeepOutExplosion_C::OnRep_Radius(const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FSoundAttenuationSettings& K2Node_MakeStruct_SoundAttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "OnRep_Radius");

	Params::AAOE_Commando_KeepOutExplosion_C_OnRep_Radius_Params Parms{};

	Parms.CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings = CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings;
	Parms.CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue = CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeStruct_SoundAttenuationSettings = K2Node_MakeStruct_SoundAttenuationSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAOE_Commando_KeepOutExplosion_C::Send_Info(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "Send_Info");

	Params::AAOE_Commando_KeepOutExplosion_C_Send_Info_Params Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AAOE_Commando_KeepOutExplosion_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAOE_Commando_KeepOutExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAOE_Commando_KeepOutExplosion_C::ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32 EntryPoint, float K2Node_CustomEvent_Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ExecuteUbergraph_AOE_Commando_KeepOutExplosion");

	Params::AAOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;

	UObject::ProcessEvent(Func, &Parms);

}

}


