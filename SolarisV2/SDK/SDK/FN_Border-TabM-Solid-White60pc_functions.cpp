#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Solid-White60pc.Border-TabM-Solid-White60pc_C
// (None)

class UClass* UBorderMinusTabMMinusSolidMinusWhite60pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Solid-White60pc_C");

	return Clss;
}


// Border-TabM-Solid-White60pc_C Border-TabM-Solid-White60pc.Default__Border-TabM-Solid-White60pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusSolidMinusWhite60pc_C* UBorderMinusTabMMinusSolidMinusWhite60pc_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusSolidMinusWhite60pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusSolidMinusWhite60pc_C*>(UBorderMinusTabMMinusSolidMinusWhite60pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


