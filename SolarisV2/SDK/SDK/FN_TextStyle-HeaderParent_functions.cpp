#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HeaderParent.TextStyle-HeaderParent_C
// (None)

class UClass* UTextStyleMinusHeaderParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HeaderParent_C");

	return Clss;
}


// TextStyle-HeaderParent_C TextStyle-HeaderParent.Default__TextStyle-HeaderParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderParent_C* UTextStyleMinusHeaderParent_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderParent_C*>(UTextStyleMinusHeaderParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


