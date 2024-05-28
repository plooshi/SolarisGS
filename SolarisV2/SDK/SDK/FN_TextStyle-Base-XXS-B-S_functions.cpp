#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XXS-B-S.TextStyle-Base-XXS-B-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusXXSMinusBMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XXS-B-S_C");

	return Clss;
}


// TextStyle-Base-XXS-B-S_C TextStyle-Base-XXS-B-S.Default__TextStyle-Base-XXS-B-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXXSMinusBMinusS_C* UTextStyleMinusBaseMinusXXSMinusBMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXXSMinusBMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXXSMinusBMinusS_C*>(UTextStyleMinusBaseMinusXXSMinusBMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


