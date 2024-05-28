#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-1pxOutline.Border-1pxOutline_C
// (None)

class UClass* UBorderMinus1pxOutline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-1pxOutline_C");

	return Clss;
}


// Border-1pxOutline_C Border-1pxOutline.Default__Border-1pxOutline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinus1pxOutline_C* UBorderMinus1pxOutline_C::GetDefaultObj()
{
	static class UBorderMinus1pxOutline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinus1pxOutline_C*>(UBorderMinus1pxOutline_C::StaticClass()->DefaultObject);

	return Default;
}

}


