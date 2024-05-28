#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Horizon.TextStyle-Header-L-Horizon_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusHorizon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Horizon_C");

	return Clss;
}


// TextStyle-Header-L-Horizon_C TextStyle-Header-L-Horizon.Default__TextStyle-Header-L-Horizon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusHorizon_C* UTextStyleMinusHeaderMinusLMinusHorizon_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusHorizon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusHorizon_C*>(UTextStyleMinusHeaderMinusLMinusHorizon_C::StaticClass()->DefaultObject);

	return Default;
}

}


