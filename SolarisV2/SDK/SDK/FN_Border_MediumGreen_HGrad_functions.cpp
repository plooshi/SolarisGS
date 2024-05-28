#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_MediumGreen_HGrad.Border_MediumGreen_HGrad_C
// (None)

class UClass* UBorder_MediumGreen_HGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_MediumGreen_HGrad_C");

	return Clss;
}


// Border_MediumGreen_HGrad_C Border_MediumGreen_HGrad.Default__Border_MediumGreen_HGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_MediumGreen_HGrad_C* UBorder_MediumGreen_HGrad_C::GetDefaultObj()
{
	static class UBorder_MediumGreen_HGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_MediumGreen_HGrad_C*>(UBorder_MediumGreen_HGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


