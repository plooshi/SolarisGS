#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TransparentWithCues-XS-B-White.ButtonStyle-TransparentWithCues-XS-B-White_C
// (None)

class UClass* UButtonStyleMinusTransparentWithCuesMinusXSMinusBMinusWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TransparentWithCues-XS-B-White_C");

	return Clss;
}


// ButtonStyle-TransparentWithCues-XS-B-White_C ButtonStyle-TransparentWithCues-XS-B-White.Default__ButtonStyle-TransparentWithCues-XS-B-White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTransparentWithCuesMinusXSMinusBMinusWhite_C* UButtonStyleMinusTransparentWithCuesMinusXSMinusBMinusWhite_C::GetDefaultObj()
{
	static class UButtonStyleMinusTransparentWithCuesMinusXSMinusBMinusWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTransparentWithCuesMinusXSMinusBMinusWhite_C*>(UButtonStyleMinusTransparentWithCuesMinusXSMinusBMinusWhite_C::StaticClass()->DefaultObject);

	return Default;
}

}


