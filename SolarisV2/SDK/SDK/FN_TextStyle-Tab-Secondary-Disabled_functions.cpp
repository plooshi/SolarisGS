#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Tab-Secondary-Disabled.TextStyle-Tab-Secondary-Disabled_C
// (None)

class UClass* UTextStyleMinusTabMinusSecondaryMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Tab-Secondary-Disabled_C");

	return Clss;
}


// TextStyle-Tab-Secondary-Disabled_C TextStyle-Tab-Secondary-Disabled.Default__TextStyle-Tab-Secondary-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusTabMinusSecondaryMinusDisabled_C* UTextStyleMinusTabMinusSecondaryMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusTabMinusSecondaryMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusTabMinusSecondaryMinusDisabled_C*>(UTextStyleMinusTabMinusSecondaryMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


