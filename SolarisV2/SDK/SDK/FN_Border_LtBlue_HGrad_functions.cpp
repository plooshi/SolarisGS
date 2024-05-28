#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_LtBlue_HGrad.Border_LtBlue_HGrad_C
// (None)

class UClass* UBorder_LtBlue_HGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_LtBlue_HGrad_C");

	return Clss;
}


// Border_LtBlue_HGrad_C Border_LtBlue_HGrad.Default__Border_LtBlue_HGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_LtBlue_HGrad_C* UBorder_LtBlue_HGrad_C::GetDefaultObj()
{
	static class UBorder_LtBlue_HGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_LtBlue_HGrad_C*>(UBorder_LtBlue_HGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


