#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-70pc.TextStyle-Base-S-B-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-70pc_C");

	return Clss;
}


// TextStyle-Base-S-B-70pc_C TextStyle-Base-S-B-70pc.Default__TextStyle-Base-S-B-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinus70pc_C* UTextStyleMinusBaseMinusSMinusBMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinus70pc_C*>(UTextStyleMinusBaseMinusSMinusBMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


