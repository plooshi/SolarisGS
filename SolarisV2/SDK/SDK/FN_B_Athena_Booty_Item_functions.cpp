#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Athena_Booty_Item.B_Athena_Booty_Item_C
// (Actor)

class UClass* AB_Athena_Booty_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Athena_Booty_Item_C");

	return Clss;
}


// B_Athena_Booty_Item_C B_Athena_Booty_Item.Default__B_Athena_Booty_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Athena_Booty_Item_C* AB_Athena_Booty_Item_C::GetDefaultObj()
{
	static class AB_Athena_Booty_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Athena_Booty_Item_C*>(AB_Athena_Booty_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Athena_Booty_Item.B_Athena_Booty_Item_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Athena_Booty_Item_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_Booty_Item_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_Booty_Item.B_Athena_Booty_Item_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Athena_Booty_Item_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_Booty_Item_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Athena_Booty_Item.B_Athena_Booty_Item_C.ExecuteUbergraph_B_Athena_Booty_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_Booty_Item_C::ExecuteUbergraph_B_Athena_Booty_Item(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Athena_Booty_Item_C", "ExecuteUbergraph_B_Athena_Booty_Item");

	Params::AB_Athena_Booty_Item_C_ExecuteUbergraph_B_Athena_Booty_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


