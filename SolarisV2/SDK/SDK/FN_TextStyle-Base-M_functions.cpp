#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M.TextStyle-Base-M_C
// (None)

class UClass* UTextStyleMinusBaseMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M_C");

	return Clss;
}


// TextStyle-Base-M_C TextStyle-Base-M.Default__TextStyle-Base-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusM_C* UTextStyleMinusBaseMinusM_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusM_C*>(UTextStyleMinusBaseMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


