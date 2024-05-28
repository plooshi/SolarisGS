#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Error.ButtonStyle-Skew_Error_C
// (None)

class UClass* UButtonStyleMinusSkew_Error_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Error_C");

	return Clss;
}


// ButtonStyle-Skew_Error_C ButtonStyle-Skew_Error.Default__ButtonStyle-Skew_Error_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Error_C* UButtonStyleMinusSkew_Error_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Error_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Error_C*>(UButtonStyleMinusSkew_Error_C::StaticClass()->DefaultObject);

	return Default;
}

}


