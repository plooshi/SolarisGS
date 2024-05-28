#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-TurialTipText.TextStyle-Com-TurialTipText_C
// (None)

class UClass* UTextStyleMinusComMinusTurialTipText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-TurialTipText_C");

	return Clss;
}


// TextStyle-Com-TurialTipText_C TextStyle-Com-TurialTipText.Default__TextStyle-Com-TurialTipText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinusTurialTipText_C* UTextStyleMinusComMinusTurialTipText_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinusTurialTipText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinusTurialTipText_C*>(UTextStyleMinusComMinusTurialTipText_C::StaticClass()->DefaultObject);

	return Default;
}

}


