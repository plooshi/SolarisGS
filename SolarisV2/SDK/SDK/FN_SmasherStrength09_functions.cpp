#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength09.SmasherStrength09_C
// (None)

class UClass* USmasherStrength09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength09_C");

	return Clss;
}


// SmasherStrength09_C SmasherStrength09.Default__SmasherStrength09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength09_C* USmasherStrength09_C::GetDefaultObj()
{
	static class USmasherStrength09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength09_C*>(USmasherStrength09_C::StaticClass()->DefaultObject);

	return Default;
}

}


