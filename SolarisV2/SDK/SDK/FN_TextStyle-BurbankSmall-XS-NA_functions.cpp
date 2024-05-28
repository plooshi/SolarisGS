#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-XS-NA.TextStyle-BurbankSmall-XS-NA_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusXSMinusNA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-XS-NA_C");

	return Clss;
}


// TextStyle-BurbankSmall-XS-NA_C TextStyle-BurbankSmall-XS-NA.Default__TextStyle-BurbankSmall-XS-NA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusXSMinusNA_C* UTextStyleMinusBurbankSmallMinusXSMinusNA_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusXSMinusNA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusXSMinusNA_C*>(UTextStyleMinusBurbankSmallMinusXSMinusNA_C::StaticClass()->DefaultObject);

	return Default;
}

}


