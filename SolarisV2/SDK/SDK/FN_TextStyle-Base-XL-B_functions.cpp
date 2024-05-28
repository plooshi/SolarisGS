#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XL-B.TextStyle-Base-XL-B_C
// (None)

class UClass* UTextStyleMinusBaseMinusXLMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XL-B_C");

	return Clss;
}


// TextStyle-Base-XL-B_C TextStyle-Base-XL-B.Default__TextStyle-Base-XL-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXLMinusB_C* UTextStyleMinusBaseMinusXLMinusB_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXLMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXLMinusB_C*>(UTextStyleMinusBaseMinusXLMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


