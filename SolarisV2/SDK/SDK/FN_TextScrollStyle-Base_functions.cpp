#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextScrollStyle-Base.TextScrollStyle-Base_C
// (None)

class UClass* UTextScrollStyleMinusBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextScrollStyle-Base_C");

	return Clss;
}


// TextScrollStyle-Base_C TextScrollStyle-Base.Default__TextScrollStyle-Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextScrollStyleMinusBase_C* UTextScrollStyleMinusBase_C::GetDefaultObj()
{
	static class UTextScrollStyleMinusBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextScrollStyleMinusBase_C*>(UTextScrollStyleMinusBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


