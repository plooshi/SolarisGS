#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-XS-Cyan.TextStyle-BurbankSmall-XS-Cyan_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusXSMinusCyan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-XS-Cyan_C");

	return Clss;
}


// TextStyle-BurbankSmall-XS-Cyan_C TextStyle-BurbankSmall-XS-Cyan.Default__TextStyle-BurbankSmall-XS-Cyan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusXSMinusCyan_C* UTextStyleMinusBurbankSmallMinusXSMinusCyan_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusXSMinusCyan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusXSMinusCyan_C*>(UTextStyleMinusBurbankSmallMinusXSMinusCyan_C::StaticClass()->DefaultObject);

	return Default;
}

}


