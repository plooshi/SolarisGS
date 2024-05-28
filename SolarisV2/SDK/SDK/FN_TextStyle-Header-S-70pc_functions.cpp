#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-S-70pc.TextStyle-Header-S-70pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusSMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-S-70pc_C");

	return Clss;
}


// TextStyle-Header-S-70pc_C TextStyle-Header-S-70pc.Default__TextStyle-Header-S-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusSMinus70pc_C* UTextStyleMinusHeaderMinusSMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusSMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusSMinus70pc_C*>(UTextStyleMinusHeaderMinusSMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


