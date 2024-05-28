#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-70pc.TextStyle-Base-XS-B-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-70pc_C");

	return Clss;
}


// TextStyle-Base-XS-B-70pc_C TextStyle-Base-XS-B-70pc.Default__TextStyle-Base-XS-B-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinus70pc_C* UTextStyleMinusBaseMinusXSMinusBMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinus70pc_C*>(UTextStyleMinusBaseMinusXSMinusBMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


