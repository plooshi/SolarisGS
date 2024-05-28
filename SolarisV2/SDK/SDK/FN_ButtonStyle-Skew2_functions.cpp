#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew2.ButtonStyle-Skew2_C
// (None)

class UClass* UButtonStyleMinusSkew2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew2_C");

	return Clss;
}


// ButtonStyle-Skew2_C ButtonStyle-Skew2.Default__ButtonStyle-Skew2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew2_C* UButtonStyleMinusSkew2_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew2_C*>(UButtonStyleMinusSkew2_C::StaticClass()->DefaultObject);

	return Default;
}

}


