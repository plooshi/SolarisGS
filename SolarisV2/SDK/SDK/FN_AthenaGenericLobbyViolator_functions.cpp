#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C
// (None)

class UClass* UAthenaGenericLobbyViolator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaGenericLobbyViolator_C");

	return Clss;
}


// AthenaGenericLobbyViolator_C AthenaGenericLobbyViolator.Default__AthenaGenericLobbyViolator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaGenericLobbyViolator_C* UAthenaGenericLobbyViolator_C::GetDefaultObj()
{
	static class UAthenaGenericLobbyViolator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaGenericLobbyViolator_C*>(UAthenaGenericLobbyViolator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C.SetGamemodeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SubText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UAthenaGenericLobbyViolator_C::SetGamemodeName(class FText Name, class FText SubText, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaGenericLobbyViolator_C", "SetGamemodeName");

	Params::UAthenaGenericLobbyViolator_C_SetGamemodeName_Params Parms{};

	Parms.Name = Name;
	Parms.SubText = SubText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


