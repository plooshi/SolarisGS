#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-FloatingShadow.Border-FloatingShadow_C
// (None)

class UClass* UBorderMinusFloatingShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-FloatingShadow_C");

	return Clss;
}


// Border-FloatingShadow_C Border-FloatingShadow.Default__Border-FloatingShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusFloatingShadow_C* UBorderMinusFloatingShadow_C::GetDefaultObj()
{
	static class UBorderMinusFloatingShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusFloatingShadow_C*>(UBorderMinusFloatingShadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


