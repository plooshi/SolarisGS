#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B.TextStyle-Base-XS-B_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B_C");

	return Clss;
}


// TextStyle-Base-XS-B_C TextStyle-Base-XS-B.Default__TextStyle-Base-XS-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusB_C* UTextStyleMinusBaseMinusXSMinusB_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusB_C*>(UTextStyleMinusBaseMinusXSMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


