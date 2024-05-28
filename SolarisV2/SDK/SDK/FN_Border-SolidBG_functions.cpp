#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG.Border-SolidBG_C
// (None)

class UClass* UBorderMinusSolidBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG_C");

	return Clss;
}


// Border-SolidBG_C Border-SolidBG.Default__Border-SolidBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBG_C* UBorderMinusSolidBG_C::GetDefaultObj()
{
	static class UBorderMinusSolidBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBG_C*>(UBorderMinusSolidBG_C::StaticClass()->DefaultObject);

	return Default;
}

}


