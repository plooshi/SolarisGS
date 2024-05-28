#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TutorialOverlay.TutorialOverlay_C
// (None)

class UClass* UTutorialOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialOverlay_C");

	return Clss;
}


// TutorialOverlay_C TutorialOverlay.Default__TutorialOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorialOverlay_C* UTutorialOverlay_C::GetDefaultObj()
{
	static class UTutorialOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorialOverlay_C*>(UTutorialOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TutorialOverlay.TutorialOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTutorialOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialOverlay.TutorialOverlay_C.ExecuteUbergraph_TutorialOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialOverlay_C::ExecuteUbergraph_TutorialOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialOverlay_C", "ExecuteUbergraph_TutorialOverlay");

	Params::UTutorialOverlay_C_ExecuteUbergraph_TutorialOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


