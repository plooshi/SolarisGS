#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-Yellow.TextStyle-Header-XL-Yellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-Yellow_C");

	return Clss;
}


// TextStyle-Header-XL-Yellow_C TextStyle-Header-XL-Yellow.Default__TextStyle-Header-XL-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusYellow_C* UTextStyleMinusHeaderMinusXLMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusYellow_C*>(UTextStyleMinusHeaderMinusXLMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


