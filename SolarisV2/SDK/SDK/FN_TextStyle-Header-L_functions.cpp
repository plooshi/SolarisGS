#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L.TextStyle-Header-L_C
// (None)

class UClass* UTextStyleMinusHeaderMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L_C");

	return Clss;
}


// TextStyle-Header-L_C TextStyle-Header-L.Default__TextStyle-Header-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusL_C* UTextStyleMinusHeaderMinusL_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusL_C*>(UTextStyleMinusHeaderMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}


