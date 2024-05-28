#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
// (None)

class UClass* UWebLogin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebLogin_C");

	return Clss;
}


// WebLogin_C WebLogin.Default__WebLogin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWebLogin_C* UWebLogin_C::GetDefaultObj()
{
	static class UWebLogin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebLogin_C*>(UWebLogin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WebLogin.WebLogin_C.DisplayWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WebWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebLogin_C::DisplayWidget(class UWidget* WebWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLogin_C", "DisplayWidget");

	Params::UWebLogin_C_DisplayWidget_Params Parms{};

	Parms.WebWidget = WebWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebLogin.WebLogin_C.DismissWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWebLogin_C::DismissWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLogin_C", "DismissWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_WebWidget                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebLogin_C::ExecuteUbergraph_WebLogin(int32 EntryPoint, class UWidget* K2Node_Event_WebWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLogin_C", "ExecuteUbergraph_WebLogin");

	Params::UWebLogin_C_ExecuteUbergraph_WebLogin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WebWidget = K2Node_Event_WebWidget;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


