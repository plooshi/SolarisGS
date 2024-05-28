#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-HelpItem-Entry.ButtonStyle-HelpItem-Entry_C
// (None)

class UClass* UButtonStyleMinusHelpItemMinusEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-HelpItem-Entry_C");

	return Clss;
}


// ButtonStyle-HelpItem-Entry_C ButtonStyle-HelpItem-Entry.Default__ButtonStyle-HelpItem-Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusHelpItemMinusEntry_C* UButtonStyleMinusHelpItemMinusEntry_C::GetDefaultObj()
{
	static class UButtonStyleMinusHelpItemMinusEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusHelpItemMinusEntry_C*>(UButtonStyleMinusHelpItemMinusEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


