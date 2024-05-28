#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-L.TextStyle-Base-L_C
// (None)

class UClass* UTextStyleMinusBaseMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-L_C");

	return Clss;
}


// TextStyle-Base-L_C TextStyle-Base-L.Default__TextStyle-Base-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusL_C* UTextStyleMinusBaseMinusL_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusL_C*>(UTextStyleMinusBaseMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}


