#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M_B_Grey.TextStyle-Base-M_B_Grey_C
// (None)

class UClass* UTextStyleMinusBaseMinusM_B_Grey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M_B_Grey_C");

	return Clss;
}


// TextStyle-Base-M_B_Grey_C TextStyle-Base-M_B_Grey.Default__TextStyle-Base-M_B_Grey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusM_B_Grey_C* UTextStyleMinusBaseMinusM_B_Grey_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusM_B_Grey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusM_B_Grey_C*>(UTextStyleMinusBaseMinusM_B_Grey_C::StaticClass()->DefaultObject);

	return Default;
}

}


