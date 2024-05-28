#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength07.SmasherStrength07_C
// (None)

class UClass* USmasherStrength07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength07_C");

	return Clss;
}


// SmasherStrength07_C SmasherStrength07.Default__SmasherStrength07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength07_C* USmasherStrength07_C::GetDefaultObj()
{
	static class USmasherStrength07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength07_C*>(USmasherStrength07_C::StaticClass()->DefaultObject);

	return Default;
}

}


