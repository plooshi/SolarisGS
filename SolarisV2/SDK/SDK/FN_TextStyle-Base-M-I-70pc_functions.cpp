#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-I-70pc.TextStyle-Base-M-I-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusIMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-I-70pc_C");

	return Clss;
}


// TextStyle-Base-M-I-70pc_C TextStyle-Base-M-I-70pc.Default__TextStyle-Base-M-I-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusIMinus70pc_C* UTextStyleMinusBaseMinusMMinusIMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusIMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusIMinus70pc_C*>(UTextStyleMinusBaseMinusMMinusIMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


