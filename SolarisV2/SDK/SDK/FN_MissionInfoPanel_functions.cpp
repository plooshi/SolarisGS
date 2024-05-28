#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionInfoPanel.MissionInfoPanel_C
// (None)

class UClass* UMissionInfoPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionInfoPanel_C");

	return Clss;
}


// MissionInfoPanel_C MissionInfoPanel.Default__MissionInfoPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionInfoPanel_C* UMissionInfoPanel_C::GetDefaultObj()
{
	static class UMissionInfoPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionInfoPanel_C*>(UMissionInfoPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionInfoPanel.MissionInfoPanel_C.SetMissionStyle
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle      Style                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionInfoPanel_C::SetMissionStyle(const struct FFortChallengeSetStyle& Style)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionInfoPanel_C", "SetMissionStyle");

	Params::UMissionInfoPanel_C_SetMissionStyle_Params Parms{};

	Parms.Style = Style;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionInfoPanel.MissionInfoPanel_C.ExecuteUbergraph_MissionInfoPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle      K2Node_Event_Style                                               (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UMissionInfoPanel_C::ExecuteUbergraph_MissionInfoPanel(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, const struct FFortChallengeSetStyle& K2Node_Event_Style, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionInfoPanel_C", "ExecuteUbergraph_MissionInfoPanel");

	Params::UMissionInfoPanel_C_ExecuteUbergraph_MissionInfoPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.K2Node_Event_Style = K2Node_Event_Style;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


