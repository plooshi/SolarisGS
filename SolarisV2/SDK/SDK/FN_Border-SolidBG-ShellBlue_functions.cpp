#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-SolidBG-ShellBlue.Border-SolidBG-ShellBlue_C
// (None)

class UClass* UBorderMinusSolidBGMinusShellBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-SolidBG-ShellBlue_C");

	return Clss;
}


// Border-SolidBG-ShellBlue_C Border-SolidBG-ShellBlue.Default__Border-SolidBG-ShellBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusSolidBGMinusShellBlue_C* UBorderMinusSolidBGMinusShellBlue_C::GetDefaultObj()
{
	static class UBorderMinusSolidBGMinusShellBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusSolidBGMinusShellBlue_C*>(UBorderMinusSolidBGMinusShellBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


