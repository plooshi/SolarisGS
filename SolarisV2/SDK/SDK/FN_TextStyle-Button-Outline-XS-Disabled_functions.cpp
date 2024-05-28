#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-Outline-XS-Disabled.TextStyle-Button-Outline-XS-Disabled_C
// (None)

class UClass* UTextStyleMinusButtonMinusOutlineMinusXSMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-Outline-XS-Disabled_C");

	return Clss;
}


// TextStyle-Button-Outline-XS-Disabled_C TextStyle-Button-Outline-XS-Disabled.Default__TextStyle-Button-Outline-XS-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusOutlineMinusXSMinusDisabled_C* UTextStyleMinusButtonMinusOutlineMinusXSMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusOutlineMinusXSMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusOutlineMinusXSMinusDisabled_C*>(UTextStyleMinusButtonMinusOutlineMinusXSMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


