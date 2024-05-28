#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChoiceCardCount.ChoiceCardCount_C
// (None)

class UClass* UChoiceCardCount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChoiceCardCount_C");

	return Clss;
}


// ChoiceCardCount_C ChoiceCardCount.Default__ChoiceCardCount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChoiceCardCount_C* UChoiceCardCount_C::GetDefaultObj()
{
	static class UChoiceCardCount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChoiceCardCount_C*>(UChoiceCardCount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChoiceCardCount.ChoiceCardCount_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventoryCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UChoiceCardCount_C::UpdateText(int32 InventoryCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChoiceCardCount_C", "UpdateText");

	Params::UChoiceCardCount_C_UpdateText_Params Parms{};

	Parms.InventoryCount = InventoryCount;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


