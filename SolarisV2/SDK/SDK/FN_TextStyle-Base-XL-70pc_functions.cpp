#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XL-70pc.TextStyle-Base-XL-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXLMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XL-70pc_C");

	return Clss;
}


// TextStyle-Base-XL-70pc_C TextStyle-Base-XL-70pc.Default__TextStyle-Base-XL-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXLMinus70pc_C* UTextStyleMinusBaseMinusXLMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXLMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXLMinus70pc_C*>(UTextStyleMinusBaseMinusXLMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


