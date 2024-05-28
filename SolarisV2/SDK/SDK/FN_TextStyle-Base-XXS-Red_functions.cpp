#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXS-Red.TextStyle-Base-XXS-Red_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXSMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXS-Red_C");

	return Clss;
}


// TextStyle-Base-XXS-Red_C TextStyle-Base-XXS-Red.Default__TextStyle-Base-XXS-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXSMinusRed_C* UTextStyleMinusBaseMinusXXSMinusRed_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXSMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXSMinusRed_C*>(UTextStyleMinusBaseMinusXXSMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


