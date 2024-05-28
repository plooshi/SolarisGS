#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-XS-White.TextStyle-BurbankSmall-XS-White_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusXSMinusWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-XS-White_C");

	return Clss;
}


// TextStyle-BurbankSmall-XS-White_C TextStyle-BurbankSmall-XS-White.Default__TextStyle-BurbankSmall-XS-White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusXSMinusWhite_C* UTextStyleMinusBurbankSmallMinusXSMinusWhite_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusXSMinusWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusXSMinusWhite_C*>(UTextStyleMinusBurbankSmallMinusXSMinusWhite_C::StaticClass()->DefaultObject);

	return Default;
}

}


