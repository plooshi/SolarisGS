#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-BrightYellow.TextStyle-Header-L-BrightYellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusBrightYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-BrightYellow_C");

	return Clss;
}


// TextStyle-Header-L-BrightYellow_C TextStyle-Header-L-BrightYellow.Default__TextStyle-Header-L-BrightYellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusBrightYellow_C* UTextStyleMinusHeaderMinusLMinusBrightYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusBrightYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusBrightYellow_C*>(UTextStyleMinusHeaderMinusLMinusBrightYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


