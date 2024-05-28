#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TutorialRichText.TutorialRichText_C
// (None)

class UClass* UTutorialRichText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialRichText_C");

	return Clss;
}


// TutorialRichText_C TutorialRichText.Default__TutorialRichText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorialRichText_C* UTutorialRichText_C::GetDefaultObj()
{
	static class UTutorialRichText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorialRichText_C*>(UTutorialRichText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TutorialRichText.TutorialRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTutorialRichText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialRichText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialRichText.TutorialRichText_C.ExecuteUbergraph_TutorialRichText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialRichText_C::ExecuteUbergraph_TutorialRichText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialRichText_C", "ExecuteUbergraph_TutorialRichText");

	Params::UTutorialRichText_C_ExecuteUbergraph_TutorialRichText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


