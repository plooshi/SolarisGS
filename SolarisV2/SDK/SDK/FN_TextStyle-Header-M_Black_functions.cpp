#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M_Black.TextStyle-Header-M_Black_C
// (None)

class UClass* UTextStyleMinusHeaderMinusM_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M_Black_C");

	return Clss;
}


// TextStyle-Header-M_Black_C TextStyle-Header-M_Black.Default__TextStyle-Header-M_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusM_Black_C* UTextStyleMinusHeaderMinusM_Black_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusM_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusM_Black_C*>(UTextStyleMinusHeaderMinusM_Black_C::StaticClass()->DefaultObject);

	return Default;
}

}


