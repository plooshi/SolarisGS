#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength06.SmasherStrength06_C
// (None)

class UClass* USmasherStrength06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength06_C");

	return Clss;
}


// SmasherStrength06_C SmasherStrength06.Default__SmasherStrength06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength06_C* USmasherStrength06_C::GetDefaultObj()
{
	static class USmasherStrength06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength06_C*>(USmasherStrength06_C::StaticClass()->DefaultObject);

	return Default;
}

}


