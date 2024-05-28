#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXS-B-70pc.TextStyle-Base-XXS-B-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXSMinusBMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXS-B-70pc_C");

	return Clss;
}


// TextStyle-Base-XXS-B-70pc_C TextStyle-Base-XXS-B-70pc.Default__TextStyle-Base-XXS-B-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXSMinusBMinus70pc_C* UTextStyleMinusBaseMinusXXSMinusBMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXSMinusBMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXSMinusBMinus70pc_C*>(UTextStyleMinusBaseMinusXXSMinusBMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


