#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SmallStatRowWidget.SmallStatRowWidget_C
// (None)

class UClass* USmallStatRowWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallStatRowWidget_C");

	return Clss;
}


// SmallStatRowWidget_C SmallStatRowWidget.Default__SmallStatRowWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallStatRowWidget_C* USmallStatRowWidget_C::GetDefaultObj()
{
	static class USmallStatRowWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallStatRowWidget_C*>(USmallStatRowWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SmallStatRowWidget.SmallStatRowWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void USmallStatRowWidget_C::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallStatRowWidget_C", "OnStatChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallStatRowWidget.SmallStatRowWidget_C.ExecuteUbergraph_SmallStatRowWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USmallStatRowWidget_C::ExecuteUbergraph_SmallStatRowWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallStatRowWidget_C", "ExecuteUbergraph_SmallStatRowWidget");

	Params::USmallStatRowWidget_C_ExecuteUbergraph_SmallStatRowWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


