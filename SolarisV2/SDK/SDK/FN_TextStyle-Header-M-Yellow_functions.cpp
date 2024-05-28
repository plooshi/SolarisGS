#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Yellow.TextStyle-Header-M-Yellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Yellow_C");

	return Clss;
}


// TextStyle-Header-M-Yellow_C TextStyle-Header-M-Yellow.Default__TextStyle-Header-M-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusYellow_C* UTextStyleMinusHeaderMinusMMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusYellow_C*>(UTextStyleMinusHeaderMinusMMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


