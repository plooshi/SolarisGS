#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TutorialTransparentRichText.TutorialTransparentRichText_C
// (None)

class UClass* UTutorialTransparentRichText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialTransparentRichText_C");

	return Clss;
}


// TutorialTransparentRichText_C TutorialTransparentRichText.Default__TutorialTransparentRichText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorialTransparentRichText_C* UTutorialTransparentRichText_C::GetDefaultObj()
{
	static class UTutorialTransparentRichText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorialTransparentRichText_C*>(UTutorialTransparentRichText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TutorialTransparentRichText.TutorialTransparentRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTutorialTransparentRichText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialTransparentRichText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialTransparentRichText.TutorialTransparentRichText_C.ExecuteUbergraph_TutorialTransparentRichText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialTransparentRichText_C::ExecuteUbergraph_TutorialTransparentRichText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialTransparentRichText_C", "ExecuteUbergraph_TutorialTransparentRichText");

	Params::UTutorialTransparentRichText_C_ExecuteUbergraph_TutorialTransparentRichText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


