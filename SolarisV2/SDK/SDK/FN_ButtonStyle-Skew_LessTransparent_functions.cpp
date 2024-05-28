#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_LessTransparent.ButtonStyle-Skew_LessTransparent_C
// (None)

class UClass* UButtonStyleMinusSkew_LessTransparent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_LessTransparent_C");

	return Clss;
}


// ButtonStyle-Skew_LessTransparent_C ButtonStyle-Skew_LessTransparent.Default__ButtonStyle-Skew_LessTransparent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_LessTransparent_C* UButtonStyleMinusSkew_LessTransparent_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_LessTransparent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_LessTransparent_C*>(UButtonStyleMinusSkew_LessTransparent_C::StaticClass()->DefaultObject);

	return Default;
}

}


