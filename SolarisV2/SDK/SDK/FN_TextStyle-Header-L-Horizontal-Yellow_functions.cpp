#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Horizontal-Yellow.TextStyle-Header-L-Horizontal-Yellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusHorizontalMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Horizontal-Yellow_C");

	return Clss;
}


// TextStyle-Header-L-Horizontal-Yellow_C TextStyle-Header-L-Horizontal-Yellow.Default__TextStyle-Header-L-Horizontal-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusHorizontalMinusYellow_C* UTextStyleMinusHeaderMinusLMinusHorizontalMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusHorizontalMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusHorizontalMinusYellow_C*>(UTextStyleMinusHeaderMinusLMinusHorizontalMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


