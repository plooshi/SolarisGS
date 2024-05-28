#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B-70pc.TextStyle-Base-M-B-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusBMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B-70pc_C");

	return Clss;
}


// TextStyle-Base-M-B-70pc_C TextStyle-Base-M-B-70pc.Default__TextStyle-Base-M-B-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusBMinus70pc_C* UTextStyleMinusBaseMinusMMinusBMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusBMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusBMinus70pc_C*>(UTextStyleMinusBaseMinusMMinusBMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


