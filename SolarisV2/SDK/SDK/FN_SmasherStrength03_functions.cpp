#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength03.SmasherStrength03_C
// (None)

class UClass* USmasherStrength03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength03_C");

	return Clss;
}


// SmasherStrength03_C SmasherStrength03.Default__SmasherStrength03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength03_C* USmasherStrength03_C::GetDefaultObj()
{
	static class USmasherStrength03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength03_C*>(USmasherStrength03_C::StaticClass()->DefaultObject);

	return Default;
}

}


