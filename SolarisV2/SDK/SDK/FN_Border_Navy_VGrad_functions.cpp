#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Navy_VGrad.Border_Navy_VGrad_C
// (None)

class UClass* UBorder_Navy_VGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Navy_VGrad_C");

	return Clss;
}


// Border_Navy_VGrad_C Border_Navy_VGrad.Default__Border_Navy_VGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Navy_VGrad_C* UBorder_Navy_VGrad_C::GetDefaultObj()
{
	static class UBorder_Navy_VGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Navy_VGrad_C*>(UBorder_Navy_VGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


