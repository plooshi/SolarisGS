#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL.TextStyle-Header-XL_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL_C");

	return Clss;
}


// TextStyle-Header-XL_C TextStyle-Header-XL.Default__TextStyle-Header-XL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXL_C* UTextStyleMinusHeaderMinusXL_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXL_C*>(UTextStyleMinusHeaderMinusXL_C::StaticClass()->DefaultObject);

	return Default;
}

}


