#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BaseParent.TextStyle-BaseParent_C
// (None)

class UClass* UTextStyleMinusBaseParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BaseParent_C");

	return Clss;
}


// TextStyle-BaseParent_C TextStyle-BaseParent.Default__TextStyle-BaseParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseParent_C* UTextStyleMinusBaseParent_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseParent_C*>(UTextStyleMinusBaseParent_C::StaticClass()->DefaultObject);

	return Default;
}

}


