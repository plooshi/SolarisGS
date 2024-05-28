#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TransparentWithCues-XS-B.ButtonStyle-TransparentWithCues-XS-B_C
// (None)

class UClass* UButtonStyleMinusTransparentWithCuesMinusXSMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TransparentWithCues-XS-B_C");

	return Clss;
}


// ButtonStyle-TransparentWithCues-XS-B_C ButtonStyle-TransparentWithCues-XS-B.Default__ButtonStyle-TransparentWithCues-XS-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTransparentWithCuesMinusXSMinusB_C* UButtonStyleMinusTransparentWithCuesMinusXSMinusB_C::GetDefaultObj()
{
	static class UButtonStyleMinusTransparentWithCuesMinusXSMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTransparentWithCuesMinusXSMinusB_C*>(UButtonStyleMinusTransparentWithCuesMinusXSMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


