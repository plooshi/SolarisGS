#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-70pc.TextStyle-Base-S-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-70pc_C");

	return Clss;
}


// TextStyle-Base-S-70pc_C TextStyle-Base-S-70pc.Default__TextStyle-Base-S-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinus70pc_C* UTextStyleMinusBaseMinusSMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinus70pc_C*>(UTextStyleMinusBaseMinusSMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


