#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComWinnerTab.ComWinnerTab_C
// (None)

class UClass* UComWinnerTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComWinnerTab_C");

	return Clss;
}


// ComWinnerTab_C ComWinnerTab.Default__ComWinnerTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComWinnerTab_C* UComWinnerTab_C::GetDefaultObj()
{
	static class UComWinnerTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComWinnerTab_C*>(UComWinnerTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


