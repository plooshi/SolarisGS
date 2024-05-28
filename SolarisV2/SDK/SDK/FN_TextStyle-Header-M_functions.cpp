#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M.TextStyle-Header-M_C
// (None)

class UClass* UTextStyleMinusHeaderMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M_C");

	return Clss;
}


// TextStyle-Header-M_C TextStyle-Header-M.Default__TextStyle-Header-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusM_C* UTextStyleMinusHeaderMinusM_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusM_C*>(UTextStyleMinusHeaderMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


