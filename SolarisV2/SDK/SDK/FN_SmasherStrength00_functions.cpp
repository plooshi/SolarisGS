#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength00.SmasherStrength00_C
// (None)

class UClass* USmasherStrength00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength00_C");

	return Clss;
}


// SmasherStrength00_C SmasherStrength00.Default__SmasherStrength00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength00_C* USmasherStrength00_C::GetDefaultObj()
{
	static class USmasherStrength00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength00_C*>(USmasherStrength00_C::StaticClass()->DefaultObject);

	return Default;
}

}


