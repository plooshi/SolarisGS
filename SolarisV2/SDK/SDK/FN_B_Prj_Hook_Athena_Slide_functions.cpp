#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Hook_Athena_Slide.B_Prj_Hook_Athena_Slide_C
// (Actor)

class UClass* AB_Prj_Hook_Athena_Slide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Hook_Athena_Slide_C");

	return Clss;
}


// B_Prj_Hook_Athena_Slide_C B_Prj_Hook_Athena_Slide.Default__B_Prj_Hook_Athena_Slide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Hook_Athena_Slide_C* AB_Prj_Hook_Athena_Slide_C::GetDefaultObj()
{
	static class AB_Prj_Hook_Athena_Slide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Hook_Athena_Slide_C*>(AB_Prj_Hook_Athena_Slide_C::StaticClass()->DefaultObject);

	return Default;
}

}


