#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComScreen.ComScreen_C
// (None)

class UClass* UComScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComScreen_C");

	return Clss;
}


// ComScreen_C ComScreen.Default__ComScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComScreen_C* UComScreen_C::GetDefaultObj()
{
	static class UComScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComScreen_C*>(UComScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


