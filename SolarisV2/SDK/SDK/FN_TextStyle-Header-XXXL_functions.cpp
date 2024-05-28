#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XXXL.TextStyle-Header-XXXL_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXXXL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XXXL_C");

	return Clss;
}


// TextStyle-Header-XXXL_C TextStyle-Header-XXXL.Default__TextStyle-Header-XXXL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXXXL_C* UTextStyleMinusHeaderMinusXXXL_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXXXL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXXXL_C*>(UTextStyleMinusHeaderMinusXXXL_C::StaticClass()->DefaultObject);

	return Default;
}

}


