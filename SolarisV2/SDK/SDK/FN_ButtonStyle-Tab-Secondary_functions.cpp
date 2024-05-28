#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Secondary.ButtonStyle-Tab-Secondary_C
// (None)

class UClass* UButtonStyleMinusTabMinusSecondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Secondary_C");

	return Clss;
}


// ButtonStyle-Tab-Secondary_C ButtonStyle-Tab-Secondary.Default__ButtonStyle-Tab-Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusSecondary_C* UButtonStyleMinusTabMinusSecondary_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusSecondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusSecondary_C*>(UButtonStyleMinusTabMinusSecondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


