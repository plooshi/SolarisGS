#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Green.ButtonStyle-Skew_Green_C
// (None)

class UClass* UButtonStyleMinusSkew_Green_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Green_C");

	return Clss;
}


// ButtonStyle-Skew_Green_C ButtonStyle-Skew_Green.Default__ButtonStyle-Skew_Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Green_C* UButtonStyleMinusSkew_Green_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Green_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Green_C*>(UButtonStyleMinusSkew_Green_C::StaticClass()->DefaultObject);

	return Default;
}

}


