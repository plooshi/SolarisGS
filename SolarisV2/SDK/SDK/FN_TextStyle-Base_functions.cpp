#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base.TextStyle-Base_C
// (None)

class UClass* UTextStyleMinusBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base_C");

	return Clss;
}


// TextStyle-Base_C TextStyle-Base.Default__TextStyle-Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBase_C* UTextStyleMinusBase_C::GetDefaultObj()
{
	static class UTextStyleMinusBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBase_C*>(UTextStyleMinusBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


