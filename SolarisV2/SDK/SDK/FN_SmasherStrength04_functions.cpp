#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength04.SmasherStrength04_C
// (None)

class UClass* USmasherStrength04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength04_C");

	return Clss;
}


// SmasherStrength04_C SmasherStrength04.Default__SmasherStrength04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength04_C* USmasherStrength04_C::GetDefaultObj()
{
	static class USmasherStrength04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength04_C*>(USmasherStrength04_C::StaticClass()->DefaultObject);

	return Default;
}

}


