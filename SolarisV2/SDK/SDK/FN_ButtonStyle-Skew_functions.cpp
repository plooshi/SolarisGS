#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew.ButtonStyle-Skew_C
// (None)

class UClass* UButtonStyleMinusSkew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_C");

	return Clss;
}


// ButtonStyle-Skew_C ButtonStyle-Skew.Default__ButtonStyle-Skew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_C* UButtonStyleMinusSkew_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_C*>(UButtonStyleMinusSkew_C::StaticClass()->DefaultObject);

	return Default;
}

}


