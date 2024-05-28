#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BundleItemMiniCardWidget.BundleItemMiniCardWidget_C
// (None)

class UClass* UBundleItemMiniCardWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BundleItemMiniCardWidget_C");

	return Clss;
}


// BundleItemMiniCardWidget_C BundleItemMiniCardWidget.Default__BundleItemMiniCardWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBundleItemMiniCardWidget_C* UBundleItemMiniCardWidget_C::GetDefaultObj()
{
	static class UBundleItemMiniCardWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBundleItemMiniCardWidget_C*>(UBundleItemMiniCardWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.GetListItemObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UBundleItemMiniCardWidget_C::GetListItemObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BundleItemMiniCardWidget_C", "GetListItemObject");

	Params::UBundleItemMiniCardWidget_C_GetListItemObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Play Anim - Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBundleItemMiniCardWidget_C::Play_Anim_Minus_Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BundleItemMiniCardWidget_C", "Play Anim - Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBundleItemMiniCardWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BundleItemMiniCardWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.ExecuteUbergraph_BundleItemMiniCardWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBundleItemMiniCardWidget_C::ExecuteUbergraph_BundleItemMiniCardWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BundleItemMiniCardWidget_C", "ExecuteUbergraph_BundleItemMiniCardWidget");

	Params::UBundleItemMiniCardWidget_C_ExecuteUbergraph_BundleItemMiniCardWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


