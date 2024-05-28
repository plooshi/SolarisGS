#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-Purple.Border-SolidBG-Purple_C
// (None)

class UClass* UBorderMinusSolidBGMinusPurple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-Purple_C");

	return Clss;
}


// Border-SolidBG-Purple_C Border-SolidBG-Purple.Default__Border-SolidBG-Purple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusPurple_C* UBorderMinusSolidBGMinusPurple_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusPurple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusPurple_C*>(UBorderMinusSolidBGMinusPurple_C::StaticClass()->DefaultObject);

	return Default;
}

}


