#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-LowOpacity.TextStyle-Base-XS-LowOpacity_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusLowOpacity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-LowOpacity_C");

	return Clss;
}


// TextStyle-Base-XS-LowOpacity_C TextStyle-Base-XS-LowOpacity.Default__TextStyle-Base-XS-LowOpacity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusLowOpacity_C* UTextStyleMinusBaseMinusXSMinusLowOpacity_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusLowOpacity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusLowOpacity_C*>(UTextStyleMinusBaseMinusXSMinusLowOpacity_C::StaticClass()->DefaultObject);

	return Default;
}

}


