#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-PowerToastGlow.Border-PowerToastGlow_C
// (None)

class UClass* UBorderMinusPowerToastGlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-PowerToastGlow_C");

	return Clss;
}


// Border-PowerToastGlow_C Border-PowerToastGlow.Default__Border-PowerToastGlow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusPowerToastGlow_C* UBorderMinusPowerToastGlow_C::GetDefaultObj()
{
	static class UBorderMinusPowerToastGlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusPowerToastGlow_C*>(UBorderMinusPowerToastGlow_C::StaticClass()->DefaultObject);

	return Default;
}

}


