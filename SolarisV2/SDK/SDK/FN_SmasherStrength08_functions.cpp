#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmasherStrength08.SmasherStrength08_C
// (None)

class UClass* USmasherStrength08_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmasherStrength08_C");

	return Clss;
}


// SmasherStrength08_C SmasherStrength08.Default__SmasherStrength08_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmasherStrength08_C* USmasherStrength08_C::GetDefaultObj()
{
	static class USmasherStrength08_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmasherStrength08_C*>(USmasherStrength08_C::StaticClass()->DefaultObject);

	return Default;
}

}


