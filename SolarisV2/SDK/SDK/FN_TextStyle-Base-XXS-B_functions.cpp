#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXS-B.TextStyle-Base-XXS-B_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXSMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXS-B_C");

	return Clss;
}


// TextStyle-Base-XXS-B_C TextStyle-Base-XXS-B.Default__TextStyle-Base-XXS-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXSMinusB_C* UTextStyleMinusBaseMinusXXSMinusB_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXSMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXSMinusB_C*>(UTextStyleMinusBaseMinusXXSMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


