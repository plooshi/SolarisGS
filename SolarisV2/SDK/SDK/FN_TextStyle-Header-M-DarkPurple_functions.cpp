#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-DarkPurple.TextStyle-Header-M-DarkPurple_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusDarkPurple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-DarkPurple_C");

	return Clss;
}


// TextStyle-Header-M-DarkPurple_C TextStyle-Header-M-DarkPurple.Default__TextStyle-Header-M-DarkPurple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusDarkPurple_C* UTextStyleMinusHeaderMinusMMinusDarkPurple_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusDarkPurple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusDarkPurple_C*>(UTextStyleMinusHeaderMinusMMinusDarkPurple_C::StaticClass()->DefaultObject);

	return Default;
}

}


