#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-small10.TextStyle-Com-small10_C
// (None)

class UClass* UTextStyleMinusComMinussmall10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-small10_C");

	return Clss;
}


// TextStyle-Com-small10_C TextStyle-Com-small10.Default__TextStyle-Com-small10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinussmall10_C* UTextStyleMinusComMinussmall10_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinussmall10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinussmall10_C*>(UTextStyleMinusComMinussmall10_C::StaticClass()->DefaultObject);

	return Default;
}

}


