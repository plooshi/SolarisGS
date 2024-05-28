#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-OutlineEmptyFill.ButtonStyle-OutlineEmptyFill_C
// (None)

class UClass* UButtonStyleMinusOutlineEmptyFill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-OutlineEmptyFill_C");

	return Clss;
}


// ButtonStyle-OutlineEmptyFill_C ButtonStyle-OutlineEmptyFill.Default__ButtonStyle-OutlineEmptyFill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineEmptyFill_C* UButtonStyleMinusOutlineEmptyFill_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineEmptyFill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineEmptyFill_C*>(UButtonStyleMinusOutlineEmptyFill_C::StaticClass()->DefaultObject);

	return Default;
}

}


