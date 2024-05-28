#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TopWeaponStatRowEntry.TopWeaponStatRowEntry_C
// (None)

class UClass* UTopWeaponStatRowEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopWeaponStatRowEntry_C");

	return Clss;
}


// TopWeaponStatRowEntry_C TopWeaponStatRowEntry.Default__TopWeaponStatRowEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTopWeaponStatRowEntry_C* UTopWeaponStatRowEntry_C::GetDefaultObj()
{
	static class UTopWeaponStatRowEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopWeaponStatRowEntry_C*>(UTopWeaponStatRowEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaWeaponStatView*       K2Node_DynamicCast_AsAthena_Weapon_Stat_View                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponDefinition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopWeaponStatRowEntry_C::Update(class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue, class UAthenaWeaponStatView* K2Node_DynamicCast_AsAthena_Weapon_Stat_View, bool K2Node_DynamicCast_bSuccess, class UFortWeaponItemDefinition* CallFunc_GetWeaponDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopWeaponStatRowEntry_C", "Update");

	Params::UTopWeaponStatRowEntry_C_Update_Params Parms{};

	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Weapon_Stat_View = K2Node_DynamicCast_AsAthena_Weapon_Stat_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponDefinition_ReturnValue = CallFunc_GetWeaponDefinition_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTopWeaponStatRowEntry_C::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopWeaponStatRowEntry_C", "OnStatChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.ExecuteUbergraph_TopWeaponStatRowEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopWeaponStatRowEntry_C::ExecuteUbergraph_TopWeaponStatRowEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopWeaponStatRowEntry_C", "ExecuteUbergraph_TopWeaponStatRowEntry");

	Params::UTopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


