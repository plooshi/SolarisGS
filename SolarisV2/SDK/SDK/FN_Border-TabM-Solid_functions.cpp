#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TabM-Solid.Border-TabM-Solid_C
// (None)

class UClass* UBorderMinusTabMMinusSolid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TabM-Solid_C");

	return Clss;
}


// Border-TabM-Solid_C Border-TabM-Solid.Default__Border-TabM-Solid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTabMMinusSolid_C* UBorderMinusTabMMinusSolid_C::GetDefaultObj()
{
	static class UBorderMinusTabMMinusSolid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTabMMinusSolid_C*>(UBorderMinusTabMMinusSolid_C::StaticClass()->DefaultObject);

	return Default;
}

}


