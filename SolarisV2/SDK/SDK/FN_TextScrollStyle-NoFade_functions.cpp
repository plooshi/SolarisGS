#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextScrollStyle-NoFade.TextScrollStyle-NoFade_C
// (None)

class UClass* UTextScrollStyleMinusNoFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextScrollStyle-NoFade_C");

	return Clss;
}


// TextScrollStyle-NoFade_C TextScrollStyle-NoFade.Default__TextScrollStyle-NoFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextScrollStyleMinusNoFade_C* UTextScrollStyleMinusNoFade_C::GetDefaultObj()
{
	static class UTextScrollStyleMinusNoFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextScrollStyleMinusNoFade_C*>(UTextScrollStyleMinusNoFade_C::StaticClass()->DefaultObject);

	return Default;
}

}


