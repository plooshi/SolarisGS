#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-S.TextStyle-Base-XS-B-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-S_C");

	return Clss;
}


// TextStyle-Base-XS-B-S_C TextStyle-Base-XS-B-S.Default__TextStyle-Base-XS-B-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusS_C* UTextStyleMinusBaseMinusXSMinusBMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusS_C*>(UTextStyleMinusBaseMinusXSMinusBMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


