#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_LightBlue_VGrad.Border_LightBlue_VGrad_C
// (None)

class UClass* UBorder_LightBlue_VGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_LightBlue_VGrad_C");

	return Clss;
}


// Border_LightBlue_VGrad_C Border_LightBlue_VGrad.Default__Border_LightBlue_VGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_LightBlue_VGrad_C* UBorder_LightBlue_VGrad_C::GetDefaultObj()
{
	static class UBorder_LightBlue_VGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_LightBlue_VGrad_C*>(UBorder_LightBlue_VGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


