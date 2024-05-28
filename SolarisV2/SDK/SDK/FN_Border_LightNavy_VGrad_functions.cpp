#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_LightNavy_VGrad.Border_LightNavy_VGrad_C
// (None)

class UClass* UBorder_LightNavy_VGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_LightNavy_VGrad_C");

	return Clss;
}


// Border_LightNavy_VGrad_C Border_LightNavy_VGrad.Default__Border_LightNavy_VGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_LightNavy_VGrad_C* UBorder_LightNavy_VGrad_C::GetDefaultObj()
{
	static class UBorder_LightNavy_VGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_LightNavy_VGrad_C*>(UBorder_LightNavy_VGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


