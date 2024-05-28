#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-70pc.TextStyle-Header-M-70pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-70pc_C");

	return Clss;
}


// TextStyle-Header-M-70pc_C TextStyle-Header-M-70pc.Default__TextStyle-Header-M-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinus70pc_C* UTextStyleMinusHeaderMinusMMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinus70pc_C*>(UTextStyleMinusHeaderMinusMMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


