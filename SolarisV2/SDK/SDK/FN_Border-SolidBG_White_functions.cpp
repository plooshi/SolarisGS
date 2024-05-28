#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG_White.Border-SolidBG_White_C
// (None)

class UClass* UBorderMinusSolidBG_White_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG_White_C");

	return Clss;
}


// Border-SolidBG_White_C Border-SolidBG_White.Default__Border-SolidBG_White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBG_White_C* UBorderMinusSolidBG_White_C::GetDefaultObj()
{
	static class UBorderMinusSolidBG_White_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBG_White_C*>(UBorderMinusSolidBG_White_C::StaticClass()->DefaultObject);

	return Default;
}

}


