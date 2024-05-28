#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength02.SmasherStrength02_C
// (None)

class UClass* USmasherStrength02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength02_C");

	return Clss;
}


// SmasherStrength02_C SmasherStrength02.Default__SmasherStrength02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength02_C* USmasherStrength02_C::GetDefaultObj()
{
	static class USmasherStrength02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength02_C*>(USmasherStrength02_C::StaticClass()->DefaultObject);

	return Default;
}

}


