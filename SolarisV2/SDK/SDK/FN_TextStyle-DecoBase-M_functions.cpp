#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-DecoBase-M.TextStyle-DecoBase-M_C
// (None)

class UClass* UTextStyleMinusDecoBaseMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-DecoBase-M_C");

	return Clss;
}


// TextStyle-DecoBase-M_C TextStyle-DecoBase-M.Default__TextStyle-DecoBase-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusDecoBaseMinusM_C* UTextStyleMinusDecoBaseMinusM_C::GetDefaultObj()
{
	static class UTextStyleMinusDecoBaseMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusDecoBaseMinusM_C*>(UTextStyleMinusDecoBaseMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


