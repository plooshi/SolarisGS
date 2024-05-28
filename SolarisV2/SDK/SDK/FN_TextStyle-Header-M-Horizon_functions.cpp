#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-Horizon.TextStyle-Header-M-Horizon_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusHorizon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-Horizon_C");

	return Clss;
}


// TextStyle-Header-M-Horizon_C TextStyle-Header-M-Horizon.Default__TextStyle-Header-M-Horizon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusHorizon_C* UTextStyleMinusHeaderMinusMMinusHorizon_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusHorizon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusHorizon_C*>(UTextStyleMinusHeaderMinusMMinusHorizon_C::StaticClass()->DefaultObject);

	return Default;
}

}


