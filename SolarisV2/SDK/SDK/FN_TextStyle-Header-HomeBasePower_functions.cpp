#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-HomeBasePower.TextStyle-Header-HomeBasePower_C
// (None)

class UClass* UTextStyleMinusHeaderMinusHomeBasePower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-HomeBasePower_C");

	return Clss;
}


// TextStyle-Header-HomeBasePower_C TextStyle-Header-HomeBasePower.Default__TextStyle-Header-HomeBasePower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusHomeBasePower_C* UTextStyleMinusHeaderMinusHomeBasePower_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusHomeBasePower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusHomeBasePower_C*>(UTextStyleMinusHeaderMinusHomeBasePower_C::StaticClass()->DefaultObject);

	return Default;
}

}


