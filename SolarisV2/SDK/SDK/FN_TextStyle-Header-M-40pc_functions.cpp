#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-40pc.TextStyle-Header-M-40pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-40pc_C");

	return Clss;
}


// TextStyle-Header-M-40pc_C TextStyle-Header-M-40pc.Default__TextStyle-Header-M-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinus40pc_C* UTextStyleMinusHeaderMinusMMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinus40pc_C*>(UTextStyleMinusHeaderMinusMMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


