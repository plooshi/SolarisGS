#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Tab-Secondary.TextStyle-Tab-Secondary_C
// (None)

class UClass* UTextStyleMinusTabMinusSecondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Tab-Secondary_C");

	return Clss;
}


// TextStyle-Tab-Secondary_C TextStyle-Tab-Secondary.Default__TextStyle-Tab-Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusTabMinusSecondary_C* UTextStyleMinusTabMinusSecondary_C::GetDefaultObj()
{
	static class UTextStyleMinusTabMinusSecondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusTabMinusSecondary_C*>(UTextStyleMinusTabMinusSecondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


