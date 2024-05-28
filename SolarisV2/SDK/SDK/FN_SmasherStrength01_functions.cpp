#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength01.SmasherStrength01_C
// (None)

class UClass* USmasherStrength01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength01_C");

	return Clss;
}


// SmasherStrength01_C SmasherStrength01.Default__SmasherStrength01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength01_C* USmasherStrength01_C::GetDefaultObj()
{
	static class USmasherStrength01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength01_C*>(USmasherStrength01_C::StaticClass()->DefaultObject);

	return Default;
}

}


