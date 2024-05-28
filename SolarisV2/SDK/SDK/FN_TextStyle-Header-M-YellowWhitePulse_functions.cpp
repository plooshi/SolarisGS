#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-YellowWhitePulse.TextStyle-Header-M-YellowWhitePulse_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusYellowWhitePulse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-YellowWhitePulse_C");

	return Clss;
}


// TextStyle-Header-M-YellowWhitePulse_C TextStyle-Header-M-YellowWhitePulse.Default__TextStyle-Header-M-YellowWhitePulse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusYellowWhitePulse_C* UTextStyleMinusHeaderMinusMMinusYellowWhitePulse_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusYellowWhitePulse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusYellowWhitePulse_C*>(UTextStyleMinusHeaderMinusMMinusYellowWhitePulse_C::StaticClass()->DefaultObject);

	return Default;
}

}


