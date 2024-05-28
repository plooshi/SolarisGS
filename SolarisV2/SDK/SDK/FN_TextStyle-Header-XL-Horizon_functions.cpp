#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-Horizon.TextStyle-Header-XL-Horizon_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusHorizon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-Horizon_C");

	return Clss;
}


// TextStyle-Header-XL-Horizon_C TextStyle-Header-XL-Horizon.Default__TextStyle-Header-XL-Horizon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusHorizon_C* UTextStyleMinusHeaderMinusXLMinusHorizon_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusHorizon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusHorizon_C*>(UTextStyleMinusHeaderMinusXLMinusHorizon_C::StaticClass()->DefaultObject);

	return Default;
}

}


