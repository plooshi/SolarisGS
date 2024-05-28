#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Solid-White100pc.Border-TabM-Solid-White100pc_C
// (None)

class UClass* UBorderMinusTabMMinusSolidMinusWhite100pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Solid-White100pc_C");

	return Clss;
}


// Border-TabM-Solid-White100pc_C Border-TabM-Solid-White100pc.Default__Border-TabM-Solid-White100pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusSolidMinusWhite100pc_C* UBorderMinusTabMMinusSolidMinusWhite100pc_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusSolidMinusWhite100pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusSolidMinusWhite100pc_C*>(UBorderMinusTabMMinusSolidMinusWhite100pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


