#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength10.SmasherStrength10_C
// (None)

class UClass* USmasherStrength10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength10_C");

	return Clss;
}


// SmasherStrength10_C SmasherStrength10.Default__SmasherStrength10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength10_C* USmasherStrength10_C::GetDefaultObj()
{
	static class USmasherStrength10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength10_C*>(USmasherStrength10_C::StaticClass()->DefaultObject);

	return Default;
}

}


