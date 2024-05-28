#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-S-Horizon.TextStyle-Header-S-Horizon_C
// (None)

class UClass* UTextStyleMinusHeaderMinusSMinusHorizon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-S-Horizon_C");

	return Clss;
}


// TextStyle-Header-S-Horizon_C TextStyle-Header-S-Horizon.Default__TextStyle-Header-S-Horizon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusSMinusHorizon_C* UTextStyleMinusHeaderMinusSMinusHorizon_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusSMinusHorizon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusSMinusHorizon_C*>(UTextStyleMinusHeaderMinusSMinusHorizon_C::StaticClass()->DefaultObject);

	return Default;
}

}


