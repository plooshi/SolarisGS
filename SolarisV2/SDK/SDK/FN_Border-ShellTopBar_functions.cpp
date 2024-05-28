#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ShellTopBar.Border-ShellTopBar_C
// (None)

class UClass* UBorderMinusShellTopBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ShellTopBar_C");

	return Clss;
}


// Border-ShellTopBar_C Border-ShellTopBar.Default__Border-ShellTopBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusShellTopBar_C* UBorderMinusShellTopBar_C::GetDefaultObj()
{
	static class UBorderMinusShellTopBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusShellTopBar_C*>(UBorderMinusShellTopBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


