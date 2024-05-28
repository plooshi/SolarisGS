#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-HelpItem-Heading.ButtonStyle-HelpItem-Heading_C
// (None)

class UClass* UButtonStyleMinusHelpItemMinusHeading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-HelpItem-Heading_C");

	return Clss;
}


// ButtonStyle-HelpItem-Heading_C ButtonStyle-HelpItem-Heading.Default__ButtonStyle-HelpItem-Heading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusHelpItemMinusHeading_C* UButtonStyleMinusHelpItemMinusHeading_C::GetDefaultObj()
{
	static class UButtonStyleMinusHelpItemMinusHeading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusHelpItemMinusHeading_C*>(UButtonStyleMinusHelpItemMinusHeading_C::StaticClass()->DefaultObject);

	return Default;
}

}


