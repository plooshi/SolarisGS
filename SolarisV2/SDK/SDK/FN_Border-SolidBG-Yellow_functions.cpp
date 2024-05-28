#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-Yellow.Border-SolidBG-Yellow_C
// (None)

class UClass* UBorderMinusSolidBGMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-Yellow_C");

	return Clss;
}


// Border-SolidBG-Yellow_C Border-SolidBG-Yellow.Default__Border-SolidBG-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusYellow_C* UBorderMinusSolidBGMinusYellow_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusYellow_C*>(UBorderMinusSolidBGMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


