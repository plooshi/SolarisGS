#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SmallStatWidget.SmallStatWidget_C
// (None)

class UClass* USmallStatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallStatWidget_C");

	return Clss;
}


// SmallStatWidget_C SmallStatWidget.Default__SmallStatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallStatWidget_C* USmallStatWidget_C::GetDefaultObj()
{
	static class USmallStatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallStatWidget_C*>(USmallStatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SmallStatWidget.SmallStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void USmallStatWidget_C::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallStatWidget_C", "OnStatChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallStatWidget.SmallStatWidget_C.ExecuteUbergraph_SmallStatWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USmallStatWidget_C::ExecuteUbergraph_SmallStatWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallStatWidget_C", "ExecuteUbergraph_SmallStatWidget");

	Params::USmallStatWidget_C_ExecuteUbergraph_SmallStatWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


