#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AccountNotFound.AccountNotFound_C
// (None)

class UClass* UAccountNotFound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AccountNotFound_C");

	return Clss;
}


// AccountNotFound_C AccountNotFound.Default__AccountNotFound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAccountNotFound_C* UAccountNotFound_C::GetDefaultObj()
{
	static class UAccountNotFound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAccountNotFound_C*>(UAccountNotFound_C::StaticClass()->DefaultObject);

	return Default;
}

}


