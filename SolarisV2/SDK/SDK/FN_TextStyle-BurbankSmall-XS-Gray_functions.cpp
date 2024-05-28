#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-XS-Gray.TextStyle-BurbankSmall-XS-Gray_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusXSMinusGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-XS-Gray_C");

	return Clss;
}


// TextStyle-BurbankSmall-XS-Gray_C TextStyle-BurbankSmall-XS-Gray.Default__TextStyle-BurbankSmall-XS-Gray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusXSMinusGray_C* UTextStyleMinusBurbankSmallMinusXSMinusGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusXSMinusGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusXSMinusGray_C*>(UTextStyleMinusBurbankSmallMinusXSMinusGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


