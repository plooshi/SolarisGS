#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Navy_RGrad.Border_Navy_RGrad_C
// (None)

class UClass* UBorder_Navy_RGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Navy_RGrad_C");

	return Clss;
}


// Border_Navy_RGrad_C Border_Navy_RGrad.Default__Border_Navy_RGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Navy_RGrad_C* UBorder_Navy_RGrad_C::GetDefaultObj()
{
	static class UBorder_Navy_RGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Navy_RGrad_C*>(UBorder_Navy_RGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


