#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength05.SmasherStrength05_C
// (None)

class UClass* USmasherStrength05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength05_C");

	return Clss;
}


// SmasherStrength05_C SmasherStrength05.Default__SmasherStrength05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength05_C* USmasherStrength05_C::GetDefaultObj()
{
	static class USmasherStrength05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength05_C*>(USmasherStrength05_C::StaticClass()->DefaultObject);

	return Default;
}

}


